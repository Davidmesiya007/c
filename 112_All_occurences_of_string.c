#include<stdio.h>
int main()
{
    char str[100],ch;
    int i;
    printf("\nEnter the word : ");
    gets(str);
    printf("\nEnter the word to search : ");
    scanf("%c",&ch);
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]==ch)
        {
            printf("\n%c is found at position at %d",ch,i+1);
        }
    }

    return 0;
}
