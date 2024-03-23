#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,max;
    a=50;
    b=60;
    c=25;
    max=(a>b)?(a>c?a:c):(b>c?b:c);
    printf("%d",max);
    getch();
}