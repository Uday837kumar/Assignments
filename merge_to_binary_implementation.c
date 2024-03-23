#include <stdio.h>
#include<conio.h>
void merge(double arr[], int left, int mid, int right) {
  int n1 = mid - left + 1;
  int n2 = right - mid;

 
  double leftArr[n1], rightArr[n2];

  for (int i = 0; i < n1; i++) {
    leftArr[i] = arr[left + i];
  }
  for (int j = 0; j < n2; j++) {
    rightArr[j] = arr[mid + 1 + j];
  }

  int i = 0, j = 0, k = left;
  while (i < n1 && j < n2) {
    if (leftArr[i] <= rightArr[j]) {
      arr[k] = leftArr[i];
      i++;
    } else {
      arr[k] = rightArr[j];
      j++;
    }
    k++;
  }
  while (i < n1) {
    arr[k] = leftArr[i];
    i++;
    k++;
  }

  while (j < n2) {
    arr[k] = rightArr[j];
    j++;
    k++;
  }
}

void mergeSort(double arr[], int left, int right) {
  if (left < right) {

    int mid = left + (right - left) / 2;

    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);


    merge(arr, left, mid, right);
  }
}

int binarySearch(double arr[], int left, int right, double x) {
  if (right >= left) {
    int mid = left + (right - left) / 2;

    if (arr[mid] == x) {
      return mid;
    }

    if (arr[mid] > x) {
      return binarySearch(arr, left, mid - 1, x);
    }

    return binarySearch(arr, mid + 1, right, x);
  }


  return -1;
}

int main() {
  double arr[10];
  int i;

  printf("Enter 10 double values:\n");
  for (i = 0; i < 10; i++) {
    scanf("%lf", &arr[i]);
  }

  printf("Sorting the array...\n");
  mergeSort(arr, 0, 9);

  printf("Enter a value to search: ");
  double searchValue;
  scanf("%lf", &searchValue);

  int result = binarySearch(arr, 0, 9, searchValue);

  if (result == -1) {
    printf("Cannot Find Value\n");
  } else {
    printf("Value found at index %d\n", result);
  }

  return 0;
}