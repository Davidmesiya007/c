#include<stdio.h>
int main()
{
    int n,fact=1,result=0,q,rem;
    printf("Enter the number: ");
    scanf("%d",&n);
    q = n;
    while(q!=0)
    {
        rem = q % 10;
        while(rem!=0)
        {
            fact = fact * rem;
            rem--;
        }
        result = result + fact;
        q = q / 10;
        fact = 1;
    }
    if(result == n)
    {
        printf("Strong number");
    }
    else
    {
        printf("Not a strong number");
    }
}
