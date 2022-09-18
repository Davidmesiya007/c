#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter your limit :");
    scanf("%d",&n);
    for(i=n;i!=0;i--)
    {
        sum=sum+i;
    }
    printf("Sum of %d digits is = %d",n,sum);
}
