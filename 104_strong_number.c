#include<stdio.h>
int factorial(int);
int main()
{
    int number,i,sum=0,digit,original;
    printf("\nEnter the number : ");
    scanf("%d",&number);
    original=number;
    while(number!=0)
    {
        digit=number%10;
        number=number/10;
        sum=sum+factorial(digit);
    }
    if(sum==original)
    {
        printf("%d is a Strong Number",original);
    }
    else
    {
        printf("%d is not a Strong Number",original);
    }
}
int factorial(int number)
{
    int fact=1,i;
    for(i=number;i>0;i--)
    {
        fact = fact*i;
    }
    return fact;
}
