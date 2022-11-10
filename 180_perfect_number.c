#include<stdio.h>
int main()
{
    int number,n,i,result =0;
    printf("Enter the number: ");
    scanf("%d",&number);
    n = number;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
            result = result + i;
    }
    if(result == number)
        printf("%d is a perfect number",number);
    else
        printf("%d is not a perfect number",number);
}
