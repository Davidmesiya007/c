#include<stdio.h>
int main()
{
    int a[]={5,6,7,8,9,3,4,6};
    int *p;
    p = &a[2];
    p =p+2;
    printf("%d\n",&a[2]);
    printf("%d\n",p);
    printf("%d",*p);

}
