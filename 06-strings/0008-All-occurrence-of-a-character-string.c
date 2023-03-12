// All occurrence of the string

#include<stdio.h>
#include<string.h>
int main()
{

    char arr[100],ch;     // Declaring character array which can store the 99 elements
    printf("Enter the string: ");
    gets(arr); // gets() function point to the first character of the arr
    printf("Enter the element you want check the occurrence: ");
    scanf("%c",&ch);
    for(int i=0;i<strlen(arr);i++)
    {
        if(arr[i]==ch)
            printf("\n%c is occurrence at %d",ch,i+1);
    }
    return 0;
}
