// Cube of a number
#include<stdio.h>
int main()
{
    int num,cube;
    printf("\nEnter the number: ");
    scanf("%d",&num);
    cube = num * num * num;
    printf("Cube of %d is %d",num,cube);
    return 0;
}
