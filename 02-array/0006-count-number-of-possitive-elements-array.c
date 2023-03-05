// Count positive and negative number of elements in the array

#include<stdio.h>
int main()
{
    int countPos = 0,countNeg = 0;
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the Elements of the array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i = 0; i<n; i++)
    {
        if(a[i]>0)
            countPos++;
        else if(a[i]<0)
            countNeg++;
    }
    printf("\nThe number of positive elements is = %d",countPos);
    printf("\nThe number of Negative elements is = %d",countNeg);
    return 0;

}
