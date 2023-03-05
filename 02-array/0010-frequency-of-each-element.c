// Frequency of each element

#include<stdio.h>

// Entry point of the program
int main()
{
    // Variable declaration
    int count = 0,n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int a[n];  // Array declaration
    printf("Enter the Elements : ");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }

        }
        printf("\n%d is occurred in %d times",a[i],count);
        count = 0;
    }
}
