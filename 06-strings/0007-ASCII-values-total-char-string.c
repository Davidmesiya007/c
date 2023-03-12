// ASCII values of total character in string

#include<stdio.h>
#include<string.h>
int main()
{
    char arr[100];
    printf("Enter the string: ");
    // 1. Take the input from the user using the gets()function
    gets(arr);

    // 2. Accessing the each character in the string variable [arr] using for loop
    for(int i=0;i<strlen(arr);i++)
    {
        // Display the each character invidually
        printf("%c ASCII is = %d\n",arr[i],arr[i]);
    }
    return 0;


}
