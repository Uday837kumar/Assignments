#include <stdio.h>

int main() 
{
    
    float fahrenheit, celsius;

         printf("Enter the temperature in Fahrenheit: ");
         scanf("%f", &fahrenheit);

    celsius = (5.0 / 9.0) * (fahrenheit - 32.0);
    printf("%.2f°F is equivalent to %.2f°C\n", fahrenheit, celsius);

    return 0;
}