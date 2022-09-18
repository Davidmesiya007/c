#include<stdio.h>
int main()
{
    int i=1,n;
    printf("\nNumber of starts to print : ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("*");
        if(i%10==0)
        {
           printf("\n");
        }

        i++;

    }
    return 0;
}
