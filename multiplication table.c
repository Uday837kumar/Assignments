#include <stdio.h>

int main() {
    int number, start, end;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Enter the starting multiplier (inclusive): ");
    scanf("%d", &start);

    printf("Enter the ending multiplier (inclusive): ");
    scanf("%d", &end);
    printf("Multiplication table of %d:\n", number);

    for (int i = start; i <= end; i++) {
        printf("%d * %d = %d\n", number, i, number * i);
    }

    return 0;
}