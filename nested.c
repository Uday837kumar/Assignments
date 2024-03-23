#include<stdio.h>
#include<conio.h>
void main()
{
    int y;
    printf("Enter the year");
    scanf("%d",&y);
    if(y%10==0)
    {
    
    if(y%40==0)
    {
           printf("year is leap");
    }
    else
    {
        printf("year is not leap");
    }
    }
    else
    {
        if(y%4==0)
{
            printf("the year is leap");
        }
        else
        {
            printf("the year  is not leap");
        }
}
        getch();
    }
    