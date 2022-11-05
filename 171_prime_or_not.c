#include<stdio.h>
#include<math.h>
int main()
{
    int n,var1,count = 0,i;
    printf("Enter the number: ");
    scanf("%d",&n);
    var1 = ceil(sqrt(n));
    for(i=2;i<=var1;i++)
    {
        if(n%i==0)
        {
            count = 1;
        }
    }
    if((count==0 && n!=1)||(n==2 && n==3))
    {
        printf("Prime number");
    }
    else
    {
        printf("Not a prime number");
    }

}
