#include<stdio.h>
int main()
{
    int a,b; //a=5 b=10
    printf("\nEnter the first Number: ");
    scanf("%d",&a);
    printf("\nEnter the Second Number : ");
    scanf("%d",&b);
    a=a+b; //a=15
    b=a-b;  //b=5
    a=a-b;
    printf("\nA is = %d",a);
    printf("\nB is = %d",b);
    return 0;
}
