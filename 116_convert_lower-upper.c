#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch,up;
    printf("\nEnter the character : ");
    scanf("%c",&ch);
    if(isalpha)
    {
        if(ch>=97 &&ch<=122)
        {
            up=ch-32;
            printf("\n%c in upper case = %c",ch,up);
        }
        else
        {
            printf("\nYou Already enter Upper-case letter");
        }

    }
    else
    {
        printf("\nEnter a valid character");
    }
    return 0;
}
