#include<stdio.h>
#include<ctype.h>
int main()
{
    char c;
    printf("\nEnter the value : ");
    scanf("%c",&c);
    if(isalpha(c))
        printf("\n %c is an Alphabetic.",c);
    else
        printf("\n %c is not an Alphabetic.",c);
    return 0;
}
