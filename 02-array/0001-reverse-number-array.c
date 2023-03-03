/*

Program to print the following numbers in reverse order

34,56,32,67,89,90,32,21

*/
#include<stdio.h>
int main()
{
    int arr[9] = {34,56,54,32,67,89,90,32,21};
    int i;

    for(i=9;i>0;i--)
    {
        printf("%d ",arr[i-1]);
    }
    return 0;


}
