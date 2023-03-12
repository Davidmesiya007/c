#include<stdio.h>
int main()
{
    char str1[100],str2[100];
    char *s1 = str1; // 1000
    char *s2 = str2; // 2000
    printf("Enter the first string : ");
    gets(str1);
    printf("Enter the second string : ");
    gets(str2);
    while(*++s1);
    while((*s1++)=(*s2++));
    printf("%s",str1);
    return 0;




}
