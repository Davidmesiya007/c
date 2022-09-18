#include<stdio.h>
int main()
{
    int number,i,fact;
    printf("\nEnter the number : ");
    scanf("%d",&number);
    for(i=1;i<=number/2;i++)
    {
        fact = number/i;
        if((number%i)==0)
        {
           printf("\n%d is a factor of %d",i,number);
        }

    }
    printf("\n%d is a factor of %d",number,number);
}
