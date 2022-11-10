#include<stdio.h>
#include<math.h>
int main()
{
    int n,q,rem,result = 0,count=0;
    printf("Enter the binary number: ");
    scanf("%d",&n);
    q = n;
    while(q!=0)
    {
        rem = q % 10;
        result = result + rem*pow(2,count);
        count++;
        q = q/10;
    }
    printf("Decimal equivalent of binary number %d is = %d",n,result);
    return 0;
}
