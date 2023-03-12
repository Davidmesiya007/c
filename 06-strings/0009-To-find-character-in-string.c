// To find Character in a string

// Preprocessor declaration
#include<stdio.h>
#include<string.h>
int main()
{
    // Declare and define the character array
    char arr[100];
    printf("Enter the string: ");
    // Read the string input from the user to assign the character arrray
    gets(arr);
    // Accessing each element position and display it
    for(int i=0;arr[i]!='\0';i++)
    {
        printf("%c is found in a position at %d\n",arr[i],i+1);
    }
    return 0;


}

