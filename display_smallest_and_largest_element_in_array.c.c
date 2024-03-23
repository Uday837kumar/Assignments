#include <stdio.h>

int main() {
    double numbers[10];
    double smallest = INFINITY, largest = -INFINITY;  

    printf("Enter 10 double values:\n");

  
    for (int i = 0; i < 10; i++) {
        if (scanf("%lf", &numbers[i]) != 1) {
            printf("Invalid input. Please enter only double values.\n");
            return 1; 
        }
    }

    for (int i = 0; i < 10; i++) {
        if (numbers[i] < smallest) {
            smallest = numbers[i];
        }
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
    }

    printf("Smallest element: %.2lf\n", smallest);  
    printf("Largest element: %.2lf\n", largest);

    return 0;
}