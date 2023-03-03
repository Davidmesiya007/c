// Average Two numbers using function

#include<stdio.h>

int add(int,int);
float avg(float);
int main()
{
    int num1,num2;
    printf("\nEnter The First Number : ");
    scanf("%d",&num1);
    printf("\nEnter the Second Number : ");
    scanf("%d",&num2);
    int sum = add(num1,num2);
    float average = avg(sum);
    printf("The sum is = %d",sum);
    printf("The Average is = %f",average);
}

int add(int num1,int num2)
{
    int sum = num1 + num2;
    return sum;
}

float avg(float sum)
{
    float average;
    average = sum / 2;
    return average;
}
