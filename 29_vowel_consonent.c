#include<stdio.h>
int main()
{
    char c;
    printf("\nEnter the character : ");
    scanf("%c",&c);
    if((c>=65 && c<=90)||(c>=95 && c<=122))
    {
        switch(c)
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("\n%c is a vowel",c);
            break;
        default:
            printf("\n%c is a consonent",c);
        }
    }
    else
    {
        printf("\nPlease Enter The Character.");
    }

    return 0;
}
