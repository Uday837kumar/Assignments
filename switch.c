#include<stdio.h>
#include<conio.h>
int main()
{
    int choice;
    printf("Enter your choice\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: printf("monday");
        break;
        case 2: printf("Tuesday");
        break;
        case 3: printf("wednesday");
        break;
        case 4: printf("thursday");
        break;
        case 5: printf("Friday");
        break;
        case 6: printf("saturday");
        break;
        case 7: printf("sunday");
        break;
        default: printf("invalid user choice");
        break;

        getch();
    }
}