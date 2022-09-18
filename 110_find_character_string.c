#include<stdio.h>
int main()
{
    char str[100];
    int i=0;
    printf("\nEnter the string : ");
    scanf("%s",str);
    while(str[i]!='\0')
    {
        printf("\nThe character at %d index position is %c",i,str[i]);
        i++;
    }
    return 0;
}
