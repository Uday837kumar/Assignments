#include <stdio.h>
#include<conio.h>
void selectionSort(double arr[], int n) {
    int i, j, minIndex;

    // One by one move boundary of unsorted subarray
    for (i = 0; i < n - 1; i++) {
        // Find the minimum element in unsorted array
        minIndex = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the found minimum element with the first element
        if (minIndex != i) {
            double temp = arr[minIndex];
            arr[minIndex] = arr[i];
            arr[i] = temp;
        }
    }
}

int linearSearch(double arr[], int n, double x) {
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}

int main() {
    double arr[10];
    int i, n;
    double searchValue;

    // Get array size from user (optional)
    printf("Enter the number of elements (up to 10): ");
    scanf("%d", &n);

    // Handle invalid input gracefully
    if (n > 10) {
        printf("Error: Array size cannot exceed 10.\n");
        return 1; // Exit with an error code
    }

    // Input or initialize the array
    printf("Enter %d double values:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%lf", &arr[i]);
    }

    // Sort the array
    selectionSort(arr, n);

    // Display the sorted array (optional)
    printf("Sorted array:\n");
    for (i = 0; i < n; i++) {
        printf("%.2lf ", arr[i]);
    }
    printf("\n");

    // Get search value from user
    printf("Enter a value to search: ");
    scanf("%lf", &searchValue);

    // Perform linear search
    int result = linearSearch(arr, n, searchValue);

    // Display search result
    if (result == -1) {
        printf("Cannot Find Value\n");
    } else {
        printf("Value found at index %d\n", result);
    }

    return 0;
}