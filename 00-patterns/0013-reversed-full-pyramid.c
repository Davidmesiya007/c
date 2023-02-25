/*

Reverse Full Pyramid

* * * * * * * * * * *
  * * * * * * * * *
    * * * * * * *
      * * * * *
        * * *
          *
*/

#include<stdio.h>
int main()
{
    int i,j;
    int n;
    printf("Enter the rows of the pattern : ");
    scanf("%d",&n);
    for(i = n; i >0 ; i--)
    {
        for(j = 2*n-1; j >0; j--)
        {
            if(j >= n-i+1 && j <= n+i-1)
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


