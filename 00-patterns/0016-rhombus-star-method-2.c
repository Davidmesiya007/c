#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(i = n;i > 0;i-- )
    {
        for(j = 1; j <= i-1;j++)
        {
            printf("  ");
        }
        for(k = 1;k <=n ;k++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
