/*
Display the square star pattern

* * * * *
* * * * *
* * * * *
* * * * *
* * * * *

*/

#include<stdio.h>


// Entry
int main()
{
    // variable declaration
    int i, j;
    for(i = 0; i<=5; i++)
    {
        for(j=0;j<=5;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
