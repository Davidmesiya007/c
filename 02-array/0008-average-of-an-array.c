// Find the average of an array

#include<stdio.h>
int main()
{
    int n,sum=0;
    float avg;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter the Elements of the Array : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum = sum + a[i];
    }
    avg = (float)sum / n;
    printf("\nThe sum is = %d",sum);
    printf("\nThe Average is = %.2f",avg);

}

