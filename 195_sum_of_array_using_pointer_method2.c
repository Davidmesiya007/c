#include<stdio.h>
int main()
{
    int sum = 0;
    int a[] = {6,6,7,3,4};
    int *p;
    for(p=a;p<=a+4;p++)
    {
        sum += (*p);
    }
    printf("\nsum = %d",sum);
    return 0;
}
