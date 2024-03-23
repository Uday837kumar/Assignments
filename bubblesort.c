
#include <stdio.h>

int main() {
   double arr[10];
   int i, j, temp;

   // Input elements from the user
   printf("Enter 10 elements (double): ");
   for (i = 0; i < 10; i++) {
       scanf("%lf", &arr[i]);
   }

   // Bubble sort implementation
   for (i = 0; i < 9; i++) {
       for (j = 0; j < 9 - i; j++) {
           if (arr[j] > arr[j + 1]) {
               temp = arr[j];
               arr[j] = arr[j + 1];
               arr[j + 1] = temp;
           }
       }
   }

   // Print the sorted array
   printf("Sorted array in ascending order:\n");
   for (i = 0; i < 10; i++) {
       printf("%.2lf ", arr[i]);
   }
   printf("\n");

   return 0;
}