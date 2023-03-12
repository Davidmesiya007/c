#include<stdio.h>

int stringCmp(char *str1,char *str2)
{
    int i;
    for(i=0;str1[i]==str2[i] && (str1[i]!='\0' && str2!='\0');i++);
    return str1[i]-str2[i];
}


int main()
{
    char a[100];
    char b[100];
    printf("Enter the String 1: ");
    scanf("%s",a);
    printf("Enter the String 2: ");
    scanf("%s",b);
    int result = stringCmp(a,b);
    if(result > 0)
        printf("string 1 is greater than string 2");
    else if(result < 0)
        printf("String 2 is greater than string 1");
    else
        printf("Both strings are equal");
    return 0;
}
