// Identify the number of elements in the array

#include<stdio.h>

int main()
{
    int arr[] = {3,4,6,7,7,8};
    int element = sizeof(arr) / sizeof(arr[0]);
    printf("The number of the elements in array is = %d",element);
    return 0;
}
