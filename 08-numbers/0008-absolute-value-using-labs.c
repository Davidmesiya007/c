// Absolute Value Using labs function

#include<stdio.h>
#include<stdlib.h>

void main()
{
    long num;
    printf("Enter the long Number : ");
    scanf("%ld",&num);
    long absNum = labs(num);
    printf("\nActual Value = %ld",num);
    printf("\nAbsolute Value = %ld",absNum);
}
