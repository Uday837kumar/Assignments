#include <stdio.h>
#include <string.h>

int main() {
    char str1[100];
    char str2[100];

    printf("Enter the first string: ");
    fgets(str1, 100, stdin); 

    printf("Enter the second string: ");
    fgets(str2, 100, stdin);

    int comparison = strcmp(str1, str2);

    if (comparison == 0) {
        printf("The strings are equal.\n");
    } else if (comparison < 0) {
        printf("The first string is lexicographically smaller than the second.\n");
    } else {
        printf("The first string is lexicographically larger than the second.\n");
    }

    return 0;
}