#include<stdio.h>
void main()
{
    int a[5],i;
    for(i=0 ; i<5; i++)
    {
        scanf("%d", &a[i]);        
    }
    for(i=0 ; i<5; i++)
{
    printf("\n%d", a[i]);
}

    for(i=4 ; i>=0; i--)
{
    printf("\n\t%d",a[i]);
}
}