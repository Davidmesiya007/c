#include<stdio.h>

void concat(char *,char *);
int main()
{
    char str1[100],str2[100];
    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);
    concat(str1,str2);
    printf("%s",str1);
}
void concat(char *s1,char *s2)   // s1 = 1000, s2 = 2000
{
    while(*++s1);
    while((*s1++)=(*s2++));
}
