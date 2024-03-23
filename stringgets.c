#include<stdio.h>
int main()
{
    char str[100];
    printf("Input String:");
    gets_s(str);

    toUpper(str);

    puts_s(str);

}
void toUpper str(char* str);
{
    while(*str)
    {
        if(*str >= 'a' && *str <= 'z')
        *str = *str - 32;
    str++;
    }

    }
