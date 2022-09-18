//perfect number is nothing but sum of proper factors is equal to number
#include<stdio.h>
int main()
{
    int number,i,sum=0,fact;
    printf("\nEnter the number: ");
    scanf("%d",&number);
    for(i=1;i<=number/2;i++)
    {
        fact = number%i;
        if((number%i)==0)
        {
            sum = sum+i;
        }
    }
    if(sum == number)
    {
        printf("\n%d is a Perfect Number",number);
    }
    else
    {
        printf("\n%d is a Not a Perfect Number",number);
    }
    return 0;
}
