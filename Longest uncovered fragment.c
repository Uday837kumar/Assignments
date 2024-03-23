#include <stdio.h>
#include <string.h>

char *solution(int N) {
  static char result[8]; 
  int index = 0;

  
  while (N > 1) {
    
    if (N % 2 == 0) {
      N /= 2;
      result[index++] = 'O';
    } else if (N % 3 == 0) {
      N /= 3;
      result[index++] = 'C';
    } else if (N % 5 == 0) {
      N /= 5;
      result[index++] = 'I';
    } else {
      break;
    }
  }


  if (N == 1) {
    result[index++] = 'D';
    result[index++] = 'L';
  }

  result[index] = '\0';


  return result;
}

int main() {
  int N;

  printf("Enter an integer N (between 1 and 1,000,000): ");
  scanf("%d", &N);

  char *uncoveredString = solution(N);

  printf("Longest uncovered fragment: %s\n", uncoveredString);

  return 0;
}