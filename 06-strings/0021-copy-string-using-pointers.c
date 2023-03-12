// copy using pointer

#include<stdio.h>
int main()
{
    char str1[100],copy[100];
    char *s1 = str1;
    char *s2 = copy;
    printf("Enter the string: ");
    gets(str1);
    while((*s2++)=(*s1++));
    *s2='\0';
    printf("copied string = %s",copy);

}
