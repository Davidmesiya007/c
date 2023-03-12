// Concatenate using functions
#include<stdio.h>

void concat(char [],char []);
int main()
{
    char str1[100],str2[100],result;
    printf("Enter the first string : ");
    gets(str1);
    printf("Enter the second string : ");
    gets(str2);
    concat(str1,str2);
}
void concat(char s1[],char s2[])
{
    int i,j;
    for(i=0;s1[i]!='\0';i++);
    for(j=0;s2[j]!='\0';j++,i++)
    {
        s1[i]=s2[j];
    }
    s1[i]='\0';
    printf("Compine string is : %s",s1);
}
