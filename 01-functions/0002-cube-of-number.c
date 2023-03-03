// Cube of number

#include<stdio.h>
int cube(int);
void main()
{

    int cubeValue,num;
    printf("\nEnter the number: ");
    scanf("%d",&num);
    cubeValue = cube(num);
    printf("Cube of the %d is = %d",num,cubeValue);
}
int cube(int n)
{
    return n*n*n;
}
