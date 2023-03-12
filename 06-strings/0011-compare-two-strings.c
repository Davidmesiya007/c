// compare two strings
#include<stdio.h>
int main()
{
    char A[100];
    char B[100];
    printf("Enter the A string: ");
    gets(A);
    printf("Enter the B string: ");
    gets(B);
    int i;
    for(i=0;A[i]==B[i] && (A[i]!='\0' && B[i]!='\0');i++);
    if(A[i]<B[i])
        printf("Str1 is less than str2");
    else if(A[i]>B[i])
        printf("Str2 is less than str2");
    else
        printf("Sr11 and str2 are equal");
    return 0;
}
