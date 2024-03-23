include <stdio.h>

#include <string.h>
int main()

{

char str[5][100];

int num;

printf("Input 5 strings : \n",num);

for (num=0; num < 5; num++)

gets(str[num]);

printf("The 5 strings are: ");


for (num= 0; num < 5; num++) 
puts(str[num]);

}
