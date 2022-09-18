/*
input: basic salary;
dear allowance (da) = 40% of basic salary;
rent allowance (ra) = 20% of basic salary;
gross salary = da + ra;
*/
#include<stdio.h>
int main()
{
    int ba,da,ra,ga;
    printf("Enter your basic salary: ");
    scanf("%d",&ba);
    da=(ba/100)*40;
    ra=(ba/100)*20;
    ga=ba+da+ra;
    printf("\nDearance allowance is = %d",da);
    printf("\nHouse Rent allowance is = %d",ra);
    printf("\nRamesh gross salary is = %d ",ga);
    return 0;
}
