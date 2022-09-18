#include<stdio.h>
int main(void)
{
    int t;
    printf("\nHow many test cases you executed ?");
    scanf("%d",&t);
    while(t--)
    {
        int n,m,x;
        printf("\nEnter the values of length, width and cost of the 1cm of the plate :" );

        scanf("%d%d%d",&n,&m,&x);
        printf("%d\n",2*(n+m)*x);
    }

    return 0;
}
