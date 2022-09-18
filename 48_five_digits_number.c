//reverse a 5 digits number
#include<stdio.h>
int main()
{
    int number,a,b,c,d,e,f,g,i,rev;
    printf("Enter the 5 digits number : ");
    scanf("%d",&number);
    a=number%10; //5
    b=number/10; //1234
    c=b%10;  //4
    d=b/10;  //123
    e=d%10;  //3
    f=d/10;  //12
    g=f%10;  //2
    i=f/10;  //1
    rev=(a*10000)+(c*1000)+(e*100)+(g*10)+i;
    printf("%d is reversed as = %d",number,rev);
    return 0;
}
