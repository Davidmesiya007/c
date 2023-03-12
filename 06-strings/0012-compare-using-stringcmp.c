#include<stdio.h>
int main()
{
    char str1[100];
    char str2[100];
    printf("Enter the string 1 : ");
    scanf("%s",str1);
    printf("\nEnter the string 2 : ");
    scanf("%s",str2);
    int result = strcmp(str1,str2);
    if(result > 0)
        printf("Str2 is less than str1");
    else if(result<0)
        printf("str1 is less than str2");
    else
        printf("Both are equal");
    return 0;
}
