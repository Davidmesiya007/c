#include<stdio.h>
#define MAX 50
int main()
{
    int product[MAX][MAX];
    int a[MAX][MAX],b[MAX][MAX];
    int i,j,k,arow,acol,brow,bcol,sum=0;
    printf("\nEnter the no of rows and columns of matrix A: ");
    scanf("%d%d",&arow,&acol);
    printf("Enter the Matrix a : ");
    for(i=0;i<arow;i++)
    {
        for(j=0;j<acol;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nEnter the no of rows and columns of matrix B :  ");
    scanf("%d%d",&brow,&bcol);
    if(acol!=brow)
    {
        printf("sorry we can't multiply the matrices a and b");
    }
    else
    {
        printf("Enter the Matrix b : ");
        for(i=0;i<brow;i++)
        {
            for(j=0;j<bcol;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }

    }

    //resultant matrix
    for(i=0;i<arow;i++)
    {
        for(j=0;j>bcol;j++)
        {
            for(k=0;k<brow;k++)
            {
                sum += a[i][k]*a[k][j];
            }
            product[i][j]=sum;
            sum = 0;
        }
    }
    printf("Resultant Matrix is\n");

    for(i=0;i<arow;i++)
    {
        for(j=0;j<bcol;j++)
        {
            printf("%d",product[i][j]);
        }
        printf("\n");
    }

}
