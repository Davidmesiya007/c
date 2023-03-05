// Count Even and Odd numbers in array

#include<stdio.h>
int main()
{
    int countOdd = 0;
    int countEven = 0;
    int n;
    printf("\nEnter the size of the array: ");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter the Elements of the array : ");
    for(int i = 0; i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i = 0; i<n; i++)
    {
        if(a[i]%2==0)
            countEven++;
        else
            countOdd++;
    }
    printf("\nNumber of Odd number is = %d",countOdd);
    printf("\nNumber of Even number is = %d",countEven);
}
