/*
Display the pattern like this


          * * * * * *
        *         *
      *         *
    *         *
  *         *
* * * * * *

*/
#include<stdio.h>
int main()
{
    int i,j,k;
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(i = n; i > 0; i--)
    {
        for(j = 1;j <= i-1;j++)
        {
            printf("  ");
        }
        for(k = 1;k <=n; k++)
        {
            if(i==1 || i==n || k==1 || k==n )
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}
