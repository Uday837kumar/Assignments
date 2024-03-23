#include <stdio.h>
#include <string.h>

int main()
 {
char src[100];
char dest[200];
printf("input string:");
gets(dest);

printf("input 2nd string:");
gets(src);

strcat(dest,src);
printf("concatetion of  string: %s\n",dest);
}