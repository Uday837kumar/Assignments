#include<stdio.h>
#include<conio.h>
void main()
{
    int a=10,x;
    x=a--;
    printf("x is %d\n",x);//here in post increment first it store then its goes to perform operation and then it store.
    printf("a is %d",a);
    getch();
    
}