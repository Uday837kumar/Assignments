#include<stdio.h>
long long factorial(int num);

int main()
{
    int num;

    printf("Input a number:");
    scanf("%d",&num);
   
    long long fact = factorial(num);
   
    printf("the factorial of %d is %lld\n", num,fact);
}
long long factorial(int num)
{
    if(num <= 1)
    return 1LL;
return num * factorial(num-1);

}
