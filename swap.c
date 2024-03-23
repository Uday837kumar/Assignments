#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;

printf("enter the values for a and b\n");
scanf("%d%d",&a,&b);
printf("before swapping\n");
printf("a=%d,b=%d\n",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("after swapping\n");
printf("a=%d,b=%d\n",a,b);

getch();
}
    