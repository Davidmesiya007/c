#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch,up;
    printf("\nEnter the character : ");
    scanf("%c",&ch);
    if(isalpha)
    {
        if(ch>=97 && ch<=122)
        {
            up=toupper(ch);
            printf("\n upper case letter of %c is %c",ch,up);
        }
        else
        {
            printf("\nYou already enter upper case letter.");
        }
    printf("\nPlease enter valid character");
    }
    return 0;
}
