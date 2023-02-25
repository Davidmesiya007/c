/*

Rhombus star pattern

 number of rows = 7

 n-6 n-5 n-4 n-3 n-2 n-1 n  n+1 n+2 n+3 n+4 n+5 n+6
                         *   *   *   *   *   *   *
                      *  *   *   *   *   *   *
                  *   *  *   *   *   *   *
              *   *   *  *   *   *   *
           *  *   *   *  *   *   *
        *  *  *   *   *  *   *
     *  *  *  *   *   *  *




row = 7                       row = 6
column 13                     column = 11    formula = 2 * row -1

*/
#include<stdio.h>
int main()
{
    int i,j;
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= 2*n-1; j++)
        {
            if(j >= n+1-i && j <= 2*n-i)
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
    return 0;
}
