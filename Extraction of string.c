#include <stdio.h>
#include <string.h>

int main() {
   char str[100], substr[100];
   int start, len;
   printf("Enter string: ");
   fgets(str, sizeof(str), stdin);
   printf("Enter start position: ");
   scanf("%d", &start);
   printf("Enter number of characters to extract: ");
   scanf("%d", &len);
   if (start < 0 || len <= 0 || start >= strlen(str)) {
       printf("Invalid input. Please modify starting position is zero base, positive, and within string length.\n");
   } else {  
       if (start + len > strlen(str)) {
           len = strlen(str) - start;  
       }
       strncpy(substr, str + start, len);  
       substr[len] = '\0';  

       printf("Extracted substring: %s", substr);
   }

   return 0;
}