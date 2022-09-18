#include<stdio.h>
int main()
{
    int number;
    printf("\nEnter the number: ");
    scanf("%d",&number);
    if(number>0)
    {
        printf("%d is positive number",number);
    }
    else if(number<0)
    {
        printf("%d is a negative number",number);
    }
    else
    {
        printf("%d is a zero",number);
    }


    return 0;
}
