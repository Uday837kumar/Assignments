#include <stdio.h>

int main() {
   
   double fahr[5] = {32.0, 50.0, 72.0, 98.4, 145.9};
   double celcius[5];

   double *fahrPtr = fahr;
   double *celciusPtr = celcius;


   for (int i = 0; i < 5; i++) {
       *celciusPtr = (5.0 / 9.0) * (*fahrPtr - 32.0);
       fahrPtr++;
       celciusPtr++;
   }

   printf("Fahrenheit  Celsius\n");

   fahrPtr = fahr;
   celciusPtr = celcius;

   for (int i = 0; i < 5; i++) {
       printf("%f %f\n", *fahrPtr, *celciusPtr);
       fahrPtr++;
       celciusPtr++;
   }

   return 0;
}