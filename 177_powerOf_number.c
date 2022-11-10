#include<stdio.h>
int main()
{
    int n,a,b,i,result=1;
    double result1=1.0;
    printf("Enter the Base number a: ");
    scanf("%d",&a);
    printf("Enter the raised to power number b: ");
    scanf("%d",&b);
    if(b==0)
    {
        printf("%d raised to the power %d is = %d",a,b,result);
    }
    else if(b>0)
    {
       i = b;
       while(i!=0)
       {
           result = result*a;
           i--;
       }
       printf("%d raised to the power %d is = %d",a,b,result);
    }
    else
    {
        i=b;
        while(i!=0)
        {
            result1=result1*(1.0/a);
            i++;
        }
        printf("%d raised to the power of %d is = %.10f",a,b,result1);
    }
    return 0;

}
