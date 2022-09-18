#include<stdio.h>
int main()
{
    char i;
    printf("Small letters\n");
    for(i='a';i<='z';i++)
        printf("%c |",i);
    printf("\nCapital letter\n");
    for(i='A';i<='Z';i++)
        printf("%c |",i);
}
