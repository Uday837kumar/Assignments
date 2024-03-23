#include <stdio.h>
#include<conio.h>
void insertionSortDesc(double arr[], int n) {
   for (int i = 1; i < n; i++) {
       double key = arr[i];
       int j = i - 1;

       while (j >= 0 && arr[j] < key) {
           arr[j + 1] = arr[j];
           j--;
       }
       arr[j + 1] = key;
   }
}

int main() {
   double arr[10];
   int i;

   printf("Enter 10 elements (double): ");
   for (i = 0; i < 10; i++) {
       scanf("%lf", &arr[i]);
   }

   insertionSortDesc(arr, 10);

   printf("Sorted array in descending order:\n");
   for (i = 0; i < 10; i++) {
       printf("%.1lf ", arr[i]);
   }
   printf("\n");

   return 0;

   getch();
}