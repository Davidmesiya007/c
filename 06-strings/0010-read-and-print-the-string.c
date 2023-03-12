// Read the input and print the string

#include<stdio.h>
int main()
{
    // Variable declaration
    char str[10];
    printf("Enter the string: ");
    fgets(str,sizeof str,stdin);
    printf("%s",str);
}
