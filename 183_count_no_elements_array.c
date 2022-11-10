#include<stdio.h>
int main()
{
    int a[]= {5,6,2,6,1,3,6,2,6,2,6,7,2,7,6,12,6,2,3,5,6,7};
    int size = sizeof(a)/sizeof(a[0]);
    printf("%d",size);
    return 0;
}
