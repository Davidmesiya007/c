#include<stdio.h>
int main()
{
    char c;
    printf("\nEnter the value : ");
    scanf("%c",&c);
    printf("\n%c",c);
    if((c>=65 && c<=90)||(c>=97 && c<= 122))
        printf("\n %c is alphabetic number.",c);
    else
        printf("\n %c is not alphabetic number.",c);
    return 0;
}
