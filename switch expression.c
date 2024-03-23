#include<stdio.h>
#include<conio.h>
int main()
{
    int choice,result,num1=2,num2=4;
    printf("Enter your choice\n");
    scanf("%d",&num1,&num2);
    
    switch(choice)
    {

        case 1: printf("num1 + num2");
        break;
        case 2: printf("num1 - num2");
        break;
        case 3: printf("num1 * num2");
        break;
        case 4: printf("num1 % num2");
        break;
        case 5: printf("Fnum1 / num2");
        break;
        case 6: printf("num1 = num2");
        break;
    printf("%d",num1,num2);
        default: printf("invalid user choice");
        break;

        getch();
    }
}