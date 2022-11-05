//adding two integers without using +operator
#include<stdio.h>
int main()
{
    int a,b,sum,carry;
    printf("Enter the number a and b: ");
    scanf("%d%d",&a,&b);
    while(b!=0)
    {
        sum = a^b;
        carry = (a&b)<<1;
        a = sum;
        b = carry;
    }
    printf("sum of the numbers is = %d",a);
    return 0;
}
