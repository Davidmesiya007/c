#include<stdio.h>
#define MAX 50
int main()
{
    int a[MAX];
    int i,sum = 0,count = 0,n;
    int *p;
    printf("\nEnter the Number of Integer to stored in array : ");
    scanf("%d",&n);
    printf("Enter the elements of array : ");
    for(i=0;i<n;i++)
    {

        scanf("%d",&a[i]);
    }

    p = &a[0];
    while(count<n)
    {
        sum = sum + (*p);
        p = p + 1;
        count++;
    }
    printf("sum is %d",sum);
    return 0;
}
