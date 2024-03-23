#include <stdio.h>
#include <stdlib.h> 

int main() {
    int num_elements, *arr, sum = 0;
    double average;

    printf("Enter the number of elements: ");
    scanf("%d", &num_elements);

    arr = (int *)malloc(num_elements * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1; 
    }

    printf("Enter %d integer elements:\n", num_elements);
    for (int i = 0; i < num_elements; i++) {
        scanf("%d", arr + i); 
    }
    for (int i = 0; i < num_elements; i++) {
        sum += arr[i];
    }

   
    average = (double)sum / num_elements;

    printf("Elements in the array: ");
    for (int i = 0; i < num_elements; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Sum of elements: %d\n", sum);
    printf("Average of elements: %.2lf\n", average);

    free(arr);

    return 0;
}