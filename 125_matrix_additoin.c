#include<stdio.h>
int main()
{
    int i,j,a[100][100],b[100][100],c[100][100],m,n;
    printf("\nEnter the columns : ");
    scanf("%d",&m);
    printf("\nEnter the rows : ");
    scanf("%d",&n);
    //A matrix values  get from user
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("\nEnter the value of a[%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    //B matrix values get from user
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("\nEnter the value of b[%d][%d] : ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    //addition of Matrix A and Matrix B to store Matrix C
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
           c[i][j]=a[i][j]+b[i][j];
           printf("\t%d",c[i][j]);

        }
        printf("\n");
    }
    return 0;
}
