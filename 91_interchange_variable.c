#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("\nEnter the First Number : ");
    scanf("%d",&a);
    printf("\nEneter the Second Number : ");
    scanf("%d",&b);
    temp=a;
    a=b;;
    b=temp;
    printf("\nA is = %d and B is = %d",a,b);


    return 0;
}
