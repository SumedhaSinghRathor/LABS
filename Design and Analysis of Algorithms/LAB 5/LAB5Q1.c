//Write a program to find the maximum profit nearest to but not exceeding the given knapsack capacity using the Fractional Knapsack algorithm.

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int item_id;
    float item_profit;
    float item_weight;
    float profit_weight_ratio;
} ITEM;

void swap(ITEM *a, ITEM *b) {
    ITEM temp = *a;
    *a = *b;
    *b = temp;
}

void heapify(ITEM arr[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left].profit_weight_ratio > arr[largest].profit_weight_ratio)
        largest = left;

    if (right < n && arr[right].profit_weight_ratio > arr[largest].profit_weight_ratio)
        largest = right;

    if (largest != i) {
        swap(&arr[i], &arr[largest]);
        heapify(arr, n, largest);
    }
}

void heapSort(ITEM arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    for (int i = n - 1; i > 0; i--) {
        swap(&arr[0], &arr[i]);
        heapify(arr, i, 0);
    }
}

float fractionalKnapsack(ITEM items[], int n, float capacity) {
    float total_profit = 0.0;
    float current_weight = 0.0;

    for (int i = 0; i < n; i++) {
        if (current_weight + items[i].item_weight <= capacity) {
            current_weight += items[i].item_weight;
            total_profit += items[i].item_profit;
            items[i].profit_weight_ratio = 1.0;
        } else {
            float remaining = capacity - current_weight;
            total_profit += items[i].item_profit * (remaining / items[i].item_weight);
            items[i].profit_weight_ratio = remaining / items[i].item_weight;
            break;
        }
    }

    return total_profit;
}

int main() {
    int n;
    float capacity;

    printf("Enter the number of items: ");
    scanf("%d", &n);

    ITEM *items = (ITEM *)malloc(n * sizeof(ITEM));

    for (int i = 0; i < n; i++) {
        items[i].item_id = i + 1;
        printf("Enter the profit and weight of item no %d: ", i + 1);
        scanf("%f %f", &items[i].item_profit, &items[i].item_weight);
        items[i].profit_weight_ratio = items[i].item_profit / items[i].item_weight;
    }

    printf("Enter the capacity of knapsack: ");
    scanf("%f", &capacity);

    heapSort(items, n);

    float max_profit = fractionalKnapsack(items, n, capacity);

    printf("\nItem No\tProfit\t\tWeight\t\tAmount to be taken\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%.6f\t%.6f\t%.6f\n", items[i].item_id, items[i].item_profit, items[i].item_weight, items[i].profit_weight_ratio);
    }

    printf("Maximum profit: %.6f\n", max_profit);

    free(items);
    return 0;
}
