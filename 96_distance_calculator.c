/*
1KM = 39370.1 inch = 1000 metre = 3280.84 feet = 100000 cm
*/
#include<stdio.h>
int main()
{
    int km,cm,m;
    float feet,in;
    printf("Enter your distance in KM:");
    scanf("%d",&km);
    m = km*1000;
    cm = km*100000;
    feet = km*3280.84;
    in = km*39370.1;
    printf("\n%dkm in metre: %d",km,m);
    printf("\n%dkm in centi metre: %d",km,cm);
    printf("\n%dkm in inches : %0.2f",km,in);
    printf("\n%dkm in feet :%f",km,feet);
    return 0;
}

