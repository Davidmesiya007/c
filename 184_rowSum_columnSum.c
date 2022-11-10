#include<stdio.h>
int main()
{
    int a[5][5] = {
        {8,3,9,0,10},
        {3,5,17,1,1},
        {2,8,6,23,1},
        {15,7,3,2,9},
        {6,14,2,6,0}
    };
    int i,j,sum = 0;
    //Get the input from user
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            sum = sum + a[i][j];
        }
        printf("\nsum of %d row = %d",i+1,sum);
        sum = 0;
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            sum = sum + a[j][i];
        }
        printf("\nsum of %d column = %d",i+1,sum);
        sum = 0;
    }
}
