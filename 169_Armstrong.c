#include<stdio.h>
int main()
{
    int n,q,rem,result=0,count=0,mul=1,cnt;
    printf("Enter the number : ");
    scanf("%d",&n);
    q = n;
    while(q!=0)
    {
        q=q/10;
        count++;
    }
    cnt = count;
    q = n;
    while(q!=0)
    {
        rem = q % 10;
        while(cnt!=0)
        {
            mul = mul * rem;
            cnt--;
        }
        result = result+mul;
        q = q / 10;
        cnt = count;
        mul=1;
    }
    if(result==n)
    {
        printf("Armstrong number");
    }
    else
    {
        printf("Not an Armstrong number");
    }

}
