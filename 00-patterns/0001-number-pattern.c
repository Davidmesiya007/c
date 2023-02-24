/*
Display the pattern

1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5

*/


#include<stdio.h>

void main()
{

    // Declare the variable i and j
    int i,j;

    // Implement the rows in the pattern
    for(i = 1; i<=5; i++)
    {
        // Implement the column ( Element ) in each row
        for(j = 1; j <= 5; j++)
        {
            // Display the each elements
            printf("%d ",j);
        }
        // Next line after the each row was implemented
        printf("\n");
    }

}
