#include<stdio.h>
int main()
{
    int number,i=1,rev=0,remainder;
    printf("\nEnter the Number : ");
    scanf("%d",&number);

    while(number!=0)
    {
        remainder = number%10;
        rev=(rev*10)+remainder;
        number = number/10;
    }
    printf("Reverse of the number  is = %d",rev);
}
