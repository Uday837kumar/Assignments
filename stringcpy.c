#include <stdio.h>
#include <string.h>

int main()
 {
char src[100];
char dest[200];
printf("input string:");
gets(src);

strcpy(dest,src);
printf("src string: %s\n", src,dest);
}