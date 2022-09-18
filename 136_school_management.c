#include<stdio.h>
int main()
{
    int m1,m2,m3,m4,m5,total;
    float avg;
    printf("\nPlease Enter the m1,m2,m3,m4 and m5 marks :");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    total=m1+m2+m3+m4+m5;
    avg=total/5;
    if(m1>=35 && m2>=35 && m3>=35 && m4>=35 && m5>=35)
    {
        printf("\n you pass");
        if(avg>=90)
        {
            printf("\nA grade");
        }
        else if(avg>=80)
        {
            printf("\nB grade");
        }
        else if(avg>=70)
        {
            printf("\nC grade");
        }
        else if(avg>=60)
        {
            printf("\nD grade");
        }
        else if(avg>=50)
        {

            printf("\nE grade");
        }
        else
        {
            printf("no grade");
        }

    }
    else
    {
        printf("you fail ");
    }


    return 0;
}
