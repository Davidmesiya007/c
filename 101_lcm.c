#include<stdio.h>
int main()
{
    int n1,n2,great,step;
    printf("Enter the number1 and number2 : ");
    scanf("%d%d",&n1,&n2);
    great=n1>n2 ? n1 : n2;
    step=great;
    while(1)
    {
        if(great%n1==0 && great%n2==0)
            break;
        great=great+step;
    }
    printf("\nLCM is = %d",great);
    return 0;
}
