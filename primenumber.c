#include <stdio.h>
#include <math.h> 
int main() {
    int number, isPrime = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    
    if (number <= 1) {
        printf("%d is not a prime number.\n", number);
        return 1; 
    }

    if (number == 2) {
        isPrime = 1;
    } else {
        
        for (int i = 2; i <= sqrt(number); ++i) {
            if (number % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    printf("%d %s a prime number.\n", number, isPrime ? "is" : "is not");

    return 0;
}