#include <stdio.h>
#include <string.h> 

int main() {
    char input_string[100];
    int start_position, num_characters;

    printf("Enter a string: ");
    fgets(input_string, sizeof(input_string), stdin);

    
    input_string[strcspn(input_string, "\n")] = '\0';

    printf("Enter starting position (0-based): ");
    scanf("%d", &start_position);

    printf("Enter the number of characters to extract: ");
    scanf("%d", &num_characters);

  
    if (start_position < 0 || start_position >= strlen(input_string) ||
        num_characters <= 0 || start_position + num_characters > strlen(input_string)) {
        printf("Invalid input. Please enter valid starting position and number of characters.\n");
        return 1; 
    }

    char extracted_string[num_characters + 1]; 
   
    strncpy(extracted_string, input_string + start_position, num_characters);
    extracted_string[num_characters] = '\0'; 

    printf("Extracted string: %s\n", extracted_string);

    return 0;
}