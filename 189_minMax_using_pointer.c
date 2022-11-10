#include<stdio.h>
void minMax(int a[],int len,int *min,int *max)
{
    *min = *max = a[0];
    for(int i=0;i<len;i++)
    {
        if(a[i] > *max)
            *max = a[i];
        else if(a[i] < *min)
            *min = a[i];
    }
}
int main()
{
    int min,max;
    int a[] = {23,4,21,98,987,45,32,10,123,986,50,3,4,5};
    int len;
    len = sizeof(a)/sizeof(a[0]);
    minMax(a,len,&min,&max);
    printf("Minimum value is = %d\nMaximum value is = %d",min,max);
}

