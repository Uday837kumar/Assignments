#include<stdio.h>
#include<conio.h>
int main()
{
    int num1,num2,num3,num4,num5;
    int sum;
    int Avg;
    printf("enter the numbers\n");
    scanf("%d%d%d%d%d",&num1,&num2,&num3,&num4,&num5);
printf("the entered number are %d\n%d\n%d\n%d\n%d\n",num1, num2,num3,num4,num5);
sum = num1+ num2 + num3 + num4 + num5;
printf("The sum is: %d\n",sum);
Avg = sum/5;
printf("the avergae of 5 numbers are: %d",Avg);
getch();
}

