#include<stdio.h>
int main()
{
    int i = 20,j = 10;
    int *p,*q;
    p = &i;
    q = &j;
    *q = *p;
    printf("%d",*q);
}
