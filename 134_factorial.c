#include<stdio.h>
int main()
{
    int fact=1,n,i;
    printf("\nEnter your number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact = fact * i ;

    }
    printf("\nFactorial of the %d is = %d",n,fact);
}
