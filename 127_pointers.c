#include<stdio.h>
int main()
{
    int a,*p,**q,***r;
    printf("Enter the value: ");
    scanf("%d",&a);
    printf("value of A = %d",a);
    p=&a;
    printf("\nAddress of A = %d",&a);
    printf("\nvalue of A = %d",p);
    printf("\nDereferencing value = %d",*p);
    //Double pointer
    q=&p;
    printf("\naddress of p = %d",&p);
    printf("\nValue of q = %d",q);
    printf("\nDouble pointer dereferencing value : %d",**q);
    return 0;
    //Triple pointer
    r=&q;
    printf("\nAddress of q = %d",&q);
    printf("\nValue of r = %d",r);
    printf("\nTriple pointer dereferencing value: %d",***r);
}
