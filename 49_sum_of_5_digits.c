#include<stdio.h>
int main()
{
    int number,sum=0,a,b,c,d,e,a_num,b_num,c_num,d_num;
    printf("\nEnter the five digits number : ");
    scanf ("%d",&number);
    a=number%10; //a=34567%10=7
    sum=sum+a;   //sum=0+7
    a_num=number/10;  //a_num=34567/10=3456
    b=a_num%10;       //b=3456%10=6
    sum=sum+b;        //sum=7+6=13
    b_num=a_num/10;
    c=b_num%10;
    sum=sum+c;
    c_num=b_num/10;
    d=c_num%10;
    sum=sum+d;
    d_num=c_num/10;
    e=d_num%10;
    sum=sum+e;
    printf("\nsum=%d",sum);




    return 0;
}
