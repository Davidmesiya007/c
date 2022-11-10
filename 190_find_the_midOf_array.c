#include<stdio.h>
int *findMid();
int main()
{
    int a[] = {23,45,6,26,78};
    int len = sizeof(a)/sizeof(a[0]);
    int *mid = findMid(a,len);
    printf("Mid element of the array is = %d",*mid);
}
int *findMid(int a[],int len)
{
    return &a[len/2];
}
