#include <stdio.h>
#include <ctype.h> 

int find_first_repeated_char(const char *text) {
    if (text == NULL || *text == '\0') {
        return -1; 
    }

    int char_counts[256] = {0}; 

    for (const char *c = text; *c != '\0'; c++) {
        if (isalnum(*c)) { 
            int index = *c; 
            if (++char_counts[index] > 1) {
                return *c;
            }
        }
    }

    return -1; 
}

int main() {
    char text1[] = "..12345673338910111213141516171820212223";
    char text2[] = "_init";

    int result1 = find_first_repeated_char(text1);
    int result2 = find_first_repeated_char(text2);

    printf("Sample Input 1: %s\n", text1);
    printf("First repeated character: %c\n", result1 != -1 ? result1 : '-');

    printf("\nSample Input 2: %s\n", text2);
    printf("First repeated character: %c\n", result2 != -1 ? result2 : '-');

    return 0;
}