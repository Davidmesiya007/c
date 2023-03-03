// Find Duplicate numbers

#include<stdio.h>

int main()
{
    int seen[10] = {0};
    int n;                          // 13523
    printf("Enter the number: ");
    scanf("%d",&n);
    while(n > 0)
    {
        int rem = n % 10;
        if(seen[rem]==1)
            break;
        seen[rem]=1;
        n = n / 10;
    }
    if(n>0)
        printf("YES");
    else
        printf("NO");
    return 0;
}
