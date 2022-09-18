#include<stdio.h>
int main()
{
    char c;
    printf("\nEnter the value : ");
    scanf("%c",&c);
    if((c>'a' && c<'z')||(c>'A' && c<'Z'))
        printf("\n %c is an Alphabetic number",c);
    else
        printf("\n %c is not an Alphabetic number",c);

    return 0;
}
