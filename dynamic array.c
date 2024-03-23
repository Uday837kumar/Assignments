#include <stdio.h>
#include <stdlib.h>

int main() {
    int num_elements, *arr, i, sum = 0;
    float average;

    printf("Enter the number of elements in the array: ");
    if (scanf("%d", &num_elements) != 1) {
        fprintf(stderr, " Invalid input for number of elements.\n");
        return 1;
    }
    
    arr = (int *)malloc(num_elements * sizeof(int));
    if (arr == NULL) {
        fprintf(stderr, "Error: Memory allocation failed.\n");
        return 1;
    }
    printf("Input data into the array:\n");
    for (i = 0; i < num_elements; i++) {
        printf("Element %d: ", i + 1);
        if (scanf("%d", &arr[i]) != 1) {
            fprintf(stderr, "Error: Invalid input for element %d.\n", i + 1);
            free(arr);  
            return 1;
        } }
    for (i = 0; i < num_elements; i++) {
        sum += arr[i]; }

    average = (float)sum / num_elements;
    if (num_elements == 0) {
        printf("Average: The array is empty.\n");
    } 
    else {
        printf("Average: %.f\n", average);
    }
    printf("Elements in the array: ");
    for (i = 0; i < num_elements; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Sum: %d\n", sum);
    free(arr);
    return 0;
}