#include<stdio.h>
int main()
{
    int i,j,t,n,s=0;
    printf("Enter the rows");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        t=i;
        for(j=1;j<=t;j++)
        {
            if(j==t-(t-1))
            {
                s = s + 1;
                printf("%d ",s);

            }
            else
            {
                s = s+1;
                printf("%d ",s);
            }
        }
        printf("\n");
    }
    return 0;

}
