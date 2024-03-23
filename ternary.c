#include<stdio.h>
#include<conio.h>
void main()
{
    int a=50,b=60,c=25,max;
    printf("enter the three numbers");
    scanf("%d%d%d",&a,&b,&c);
    max=(a>b)?(a>c?a:c):(b>c?b:c);
    printf("%d",max);
    getch();
}