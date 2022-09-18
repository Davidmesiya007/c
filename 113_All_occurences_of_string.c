#include<stdio.h>
int main()
{
    char str[100],ch;
    int i=0,sum=0;
    printf("\nEnter the word : ");
    gets(str);
    printf("\nEnter the char to search : ");
    scanf("%c",&ch);
    while(str[i]!='\0')
    {
       if(str[i]==ch)
       {
           printf("\n%c is position at %d",ch,i+1);
           i++;
       }
    }
    return 0;
}
