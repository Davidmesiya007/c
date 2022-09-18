#include<stdio.h>
int main()
{
    char c;
    printf("\nEnter the value : ");
    scanf("%c",&c);
    if(isalpha(c))
        printf("\n %c is alphabetic number.",c);
    else if(c >='0' && c<='9')
    {
        printf("\n%c is a digit.",c);
    }
    else
        printf("\n%c is not a Alphabetic or digits.",c);

    return 0;
}
