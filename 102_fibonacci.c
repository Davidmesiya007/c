#include<stdio.h>
int main()
{
    int n,a=0,b=1,c;
    printf("\nEnter the limit : ");
    scanf("%d",&n);
    printf("0 1 ");
    n=n-2;
    while(n>0)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
        n--;
    }


    return 0;
}
