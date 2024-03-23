#include<stdio.h>
#include<conio.h>
void main()
{
    int a=10,x;
    x=--a;
    x=a--; //here in post decremnt first it store then its goes to perform operation and then it store.
    printf("%d\n",x); // here in pre decrement first directly its goes to perform operation and then it store.
    printf("%d",a);//here in pre decrement first directly its goes to perform operation and then it store.

    getch();
}