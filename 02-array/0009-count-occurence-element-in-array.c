// Occurrence of the element in an array

#include<stdio.h>
int main()
{
    int count=0,n,element;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int a[n];

    // Take the array as a input from the user
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    // get input statement from user for search
    printf("\nEnter the item to know : ");
    scanf("%d",&element);
    for(int i=0;i<n;i++)
    {
        if(a[i]==element)
            count++;
    }
    printf("%d is occurred %d times",element,count);
    return 0;
}
