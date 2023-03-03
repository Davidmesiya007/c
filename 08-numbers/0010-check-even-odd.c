// Check the number is even or add

#include<stdio.h>

void main()
{
    int num;
    printf("\nEnter the number : ");
    scanf("%d",&num);
    if(num==0)
        printf("It is zero");
    else if(num%2==0)
        printf("The %d is Even number",num);
    else
        printf("The %d is Odd number",num);
}
