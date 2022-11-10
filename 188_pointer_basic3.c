#include<stdio.h>
int main()
{
    int *p,*q;
    int i = 10;
    p = &i;
    q = p;
    printf("%d",*q);
    return 0;
}
