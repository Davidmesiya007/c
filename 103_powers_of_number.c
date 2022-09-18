#include<stdio.h>
int main()
{
    int base,pow=1,exponent,i,temp;
    printf("\nEnter the base number :");
    scanf("%d",&base);
    printf("\nEnter the exponent number : ");
    scanf("%d",&exponent);
    temp=exponent;
    while(exponent>0)
    {
        pow=pow*base;
        exponent--;
    }
    printf("\n%d to the Power of the %d is = %d",base,temp,pow);

    return 0;
}
