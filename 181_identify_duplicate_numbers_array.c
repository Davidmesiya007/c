#include<stdio.h>
int main()
{
    int i,j;
    int a[5] = {6,7,8,2,7};
    for(i=0;i<=4;i++)
    {
        for(j=0;j<=4;j++)
        {
            if(j==i)
                continue;
            else if(a[i]=a[j])
            {
                printf("YES");
                break;
            }
            else
            {
                printf("NO");
            }
        }
    }
}
