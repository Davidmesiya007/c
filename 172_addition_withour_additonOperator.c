#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the first number: ");
    scanf("%d",&x);
    printf("Enter the Second number: ");
    scanf("%d",&y);
    if(y>0)
    {
        while(y!=0)
        {
            y--;
            x++;
        }
        printf("Sum of the numbers = %d",x);
    }
    else
    {
        while(y!=0)
        {
            x--;
            y++;
        }
        printf("Sum of the numbers = %d",x);
    }

}
