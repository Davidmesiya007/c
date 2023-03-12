// copy the string to another string
#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100],str2[100];
    int i;
    printf("Enter the string : ");
    gets(str1);
    for(i=0;str1[i]!='\0';i++)
    {
        str2[i]=str1[i];
    }
    str2[i]='\0';
    printf("String 1 is = %s\n",str1);
    printf("Copied string is %s",str2);
    return 0;
}
