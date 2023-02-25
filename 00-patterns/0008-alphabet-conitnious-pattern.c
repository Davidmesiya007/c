/*

Display the pattern

A
B C
D E F
G H I J
K L M N O

*/

#include<stdio.h>
int main()
{
    int i,j;
    int count = 0;
    for(i=1;i <= 5;i++)
    {
        for(j = 1;j <= i;j++)

        {
            count++;
            printf("%c ",count+64);
        }
        printf("\n");
    }
}

