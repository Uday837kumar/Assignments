#include <stdio.h>
#include<conio.h>
void selectionSort(double arr[], int n) {
    int i, j, minIndex;

    for (i = 0; i < n - 1; i++) {
        
        minIndex = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

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

    printf("Enter the number of elements (up to 10): ");
    scanf("%d", &n);

    if (n > 10) {
        printf("Error: Array size cannot exceed 10.\n");
        return 1; 
    }

    printf("Enter %d double values:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%lf", &arr[i]);
    }


    selectionSort(arr, n);

    printf("Sorted array:\n");
    for (i = 0; i < n; i++) {
        printf("%.2lf ", arr[i]);
    }
    printf("\n");

    printf("Enter a value to search: ");
    scanf("%lf", &searchValue);

    int result = linearSearch(arr, n, searchValue);

    if (result == -1) {
        printf("Cannot Find Value\n");
    } else {
        printf("Value found at index %d\n", result);
    }

    return 0;
}