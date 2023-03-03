// Absolute Value of a Number

/*
Abosolute Value - Absolute value is the positive value of the the any interger
*/

#include<stdio.h>
void main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    printf("\nActual Value = %d",num);
    if(num < 0)
    {
        num = -num;
    }
    printf("\nAbsolute Value = %d",num);

}
