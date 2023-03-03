// Absolute value using abs function

#include<stdio.h>
#include<stdlib.h>

void main()
{
    float num;
    printf("\nEnter the number : ");
    scanf("%f",&num);
    printf("\nActual Value : %f",num);
    num = abs(num);
    printf("\nAbsolute Value : %f",num);
}
