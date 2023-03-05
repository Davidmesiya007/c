// Copy Array to Another Array

#include<stdio.h>
int main()
{
    int n;
    printf("\nEnter the size of the Array: ");
    scanf("%d",&n);
    int a[n],b[n];
    printf("Enter the Elements of the Array A: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        b[i]=a[i];
    }

    // Display the array B
    printf("\nThe Copy of the Array\n");
    for(int i =0;i<n;i++)
    {
        printf("\nValue inside position b[%d] is = %d ",i,b[i]);
    }
    return 0;

}
