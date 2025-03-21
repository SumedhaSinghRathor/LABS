#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Global variable to count comparisons
int comparison_count = 0;

// Function to merge two halves
void merge(int arr[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    i = 0;
    j = 0;
    k = l;

    while (i < n1 && j < n2) {
        comparison_count++;
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Merge Sort function
void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

// Function to read data from a file
int read_file(const char *filename, int arr[], int max_size) {
    FILE *file = fopen(filename, "r");
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
void write_file(const char *filename, int arr[], int size) {
    FILE *file = fopen(filename, "w");
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
    printf("MAIN MENU (MERGE SORT)\n");
    printf("1. Ascending Data\n");
    printf("2. Descending Data\n");
    printf("3. Random Data\n");
    printf("4. ERROR (EXIT)\n");
}

int main() {
    int arr[500];
    int n;
    char input_file[20], output_file[20];
    clock_t start, end;
    double cpu_time_used;

    while (1) {
        display_menu();
        int option;
        printf("Enter option: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                strcpy(input_file, "inAsce.dat");
                strcpy(output_file, "outMergeAsce.dat");
                break;
            case 2:
                strcpy(input_file, "inDesc.dat");
                strcpy(output_file, "outMergeDesc.dat");
                break;
            case 3:
                strcpy(input_file, "inRand.dat");
                strcpy(output_file, "outMergeRand.dat");
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

        // Reset comparison count
        comparison_count = 0;

        // Measure execution time
        start = clock();
        mergeSort(arr, 0, n - 1);
        end = clock();

        cpu_time_used = ((double) (end - start)) * 1000000000 / CLOCKS_PER_SEC;

        // Write sorted data to the output file
        write_file(output_file, arr, n);
        printf("After Sorting: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");

        // Output the number of comparisons and execution time
        printf("Number of Comparisons: %d\n", comparison_count);
        printf("Execution Time: %.0f nanoseconds\n", cpu_time_used);
    }

    return 0;
}
