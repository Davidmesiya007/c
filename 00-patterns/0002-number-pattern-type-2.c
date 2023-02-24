/*

Display the following pattern

1 1 1 1 1
2 2 2 2 2
3 3 3 3 3
4 4 4 4 4
5 5 5 5 5

*/

// preprocessor Directives
#include<stdio.h>

// entry of the program
int main()
{
    // Declaring variable
    int i,j;

    // row
    for(i = 1; i<=5; i++)
    {
        // column of each row
        for(j=1; j<=5; j++)
        {
            // Display
            printf("%d ",i);
        }
        // next line
        printf("\n");
    }
}
