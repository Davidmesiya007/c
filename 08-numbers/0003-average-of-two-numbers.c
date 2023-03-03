// Average of Two Numbers

#include<stdio.h>
void main()
{
    int num1,num2;
    float avg;
    printf("Enter the Number 1 and Number 2 : ");
    scanf("%d%d",&num1,&num2);
    avg = (num1 + num2) / 2;
    printf("The Average of the %d and %d is = %.2f",num1,num2,avg);
}
