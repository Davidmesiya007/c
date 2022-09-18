#include<stdio.h>
int main()
{
    int n,a[10],i;
    printf("\nHow many values stored ?");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter the a[%d] : ",i);
        scanf("%d",&a[i]);

    }
    for(i=0;i<n;i++)
    {
        printf("\n %d position value = %d",i+1,a[i]);
    }


    return 0;

}

