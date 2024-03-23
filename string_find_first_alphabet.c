#include <stdio.h>
#include <ctype.h>

char find_first_repeated_char(const char* str) 
char find_second_repeated_char(const char* str)
char find_third_repeated_char(const char* str)
{
  int char_count[256] = {0}; // Use an array to store count of each character

  for (int i = 0; str[i] != '\0'; i++) {
    char ch = str[i];

    // Check if character is alphanumeric (alphabet or number)
    if (isalnum(ch)) {
      // Increment count for the character
      char_count[ch]++;

      

      // Check if this is the second occurrence
      if (char_count[ch] > 1) {
        return ch;
      }
    }
  }

  // No repeated character found
  return 1;
}

int main() {
  char str[] = "..12345673338910111213141516171820212223";
  char str1[] ="............";
  char str2[]= "_init_";
  char first_repeated = find_first_repeated_char(str);
  char second_repeated = find_first_repeated_char(str1);
  char third_repeated = find_first_repeated_char(str2);


  if (first_repeated == 1) {
    printf("No character is repeated more than once.\n");
     {
    printf("The first repeated character is: %c\n", first_repeated);
  }
  
  } else if (second_repeated ==1){
     printf("The second repeated character is: %c\n", second_repeated);

  }
    else 
        (third_repeated_repeated ==1){
             printf("The third repeated character is: %c\n", third_repeated);
    }

    
  return 0;
}