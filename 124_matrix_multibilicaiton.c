#include<stdio.h>
int main()
{
    int i,j,a[100][100],b[100][100],c[100][100],n,m;
    printf("\nEnter the rows of Matrix : ");
    scanf("%d",&n);
    printf("\nEnter the columns of Matrix :");
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m,j++)
        {
            printf("\nEnter the value of a[%d][%d] is =",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m,j++)
        {
            printf("\nEnter the value of b[%d][%d] is =",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    //Matrix Multibilication





    return 0;
}
