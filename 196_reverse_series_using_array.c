#include<stdio.h>
#define N 5
int main()
{
    int a[N];
    int *p;
    printf("Enter the %d elements: ",N);
    for(p=a;p<=a+N-1;p++)//p=1000+(5-1)*4
    {
        scanf("%d",p);
    }
    for(p=a+N-1;p>=a;p--)
    {
        printf("%d ",*p);
    }
    return 0;
}
