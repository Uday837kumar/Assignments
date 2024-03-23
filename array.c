#include <stdio.h>

int main() {
    double numbers[10];  
    printf("Enter 10 double values for the array:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%lf", &numbers[i]);  
    }

    
    double smallest = numbers[0];
    double largest = numbers[0];
    for (int i = 1; i < 10; i++) {
        if (numbers[i] < smallest) {
            smallest = numbers[i];
        }
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
    }

    
    printf("The smallest value in the array is: %lf\n", smallest);
    printf("The largest value in the array is: %lf\n", largest);

    return 0;
}