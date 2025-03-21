#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Global variable to count comparisons
int comparison_count = 0;

// Function to swap two elements
void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

// Partition function for QuickSort
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // Choosing the last element as pivot
    int i = (low - 1); // Index of smaller element

    for (int j = low; j < high; j++) {
        comparison_count++;
        if (arr[j] <= pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

// QuickSort function
void quickSort(int arr[], int low, int high, int* best_case, int* worst_case) {
    if (low < high) {
        int pi = partition(arr, low, high);

        // Determine if this is a best-case or worst-case partition
        if (pi == low || pi == high - 1) {
            (*worst_case)++;
        } else if (pi == (low + high) / 2) {
            (*best_case)++;
        }

        // Recursively sort elements before and after partition
        quickSort(arr, low, pi - 1, best_case, worst_case);
        quickSort(arr, pi + 1, high, best_case, worst_case);
    }
}

// Function to read data from a file
int read_file(const char* filename, int arr[], int max_size) {
    FILE* file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file %s\n", filename);
        return 0;
    }

    int i = 0;
    while (i < max_size && fscanf(file, "%d", &arr[i]) != EOF) {
        i++;
    }

    fclose(file);
    return i;
}

// Function to write data to a file
void write_file(const char* filename, int arr[], int size) {
    FILE* file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error opening file %s\n", filename);
        return;
    }

    for (int i = 0; i < size; i++) {
        fprintf(file, "%d ", arr[i]);
    }

    fclose(file);
}

// Function to display the menu
void display_menu() {
    printf("MAIN MENU (QUICK SORT)\n");
    printf("1. Ascending Data\n");
    printf("2. Descending Data\n");
    printf("3. Random Data\n");
    printf("4. ERROR (EXIT)\n");
}

int main() {
    int arr[500];
    int n;
    char input_file[20], output_file[20];
    int best_case, worst_case;

    while (1) {
        display_menu();
        int option;
        printf("Enter option: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                strcpy(input_file, "inAsce.dat");
                strcpy(output_file, "outQuickAsce.dat");
                break;
            case 2:
                strcpy(input_file, "inDesc.dat");
                strcpy(output_file, "outQuickDesc.dat");
                break;
            case 3:
                strcpy(input_file, "inRand.dat");
                strcpy(output_file, "outQuickRand.dat");
                break;
            case 4:
                printf("Exiting the program.\n");
                exit(0);
            default:
                printf("Invalid option. Try again.\n");
                continue;
        }

        // Read data from the input file
        n = read_file(input_file, arr, 500);
        if (n == 0) {
            printf("No data to sort.\n");
            continue;
        }

        printf("Before Sorting: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");

        // Reset comparison count and scenario flags
        comparison_count = 0;
        best_case = 0;
        worst_case = 0;

        // Perform QuickSort
        quickSort(arr, 0, n - 1, &best_case, &worst_case);

        // Write sorted data to the output file
        write_file(output_file, arr, n);
        printf("After Sorting: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");

        // Output the number of comparisons and determine the scenario
        printf("Number of Comparisons: %d\n", comparison_count);
        if (worst_case > 0 && best_case == 0) {
            printf("Scenario: Worst-case partitioning\n");
        } else if (best_case > 0 && worst_case == 0) {
            printf("Scenario: Best-case partitioning\n");
        } else {
            printf("Scenario: Mixed partitioning\n");
        }
    }

    return 0;
}
