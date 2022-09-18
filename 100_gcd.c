#include<stdio.h>
int main()
{
    int n1,n2,small,i=1,gcd;
    printf("/nEnter the number 1 and number 2 : ");
    scanf("%d%d",&n1,&n2);
    small=n1<n2 ? n1:n2;
    while(i<=small)
    {
        if(n1%i==0 && n2%i==0)
        {
            gcd=i;
        }
        i++;
    }
    printf("\ngcd is %d",gcd);
    return 0;
}
