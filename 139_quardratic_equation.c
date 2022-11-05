#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float r1,r2,rp,ip,disc;
    printf("\nEnter the a, b and c values of quadratic equation : ");
    scanf("%d%d%d",&a,&b,&c);
    disc=b*b-4*a*c;
    if(disc>=0)
    {
        r1=-b+sqrt(disc)/(2*a);
        r2=-b-sqrt(disc)/(2*a);
        printf("The factors\nr1 is = %f\nr2 is = %fd",r1,r2);
    }
    else
    {
        rp=-b/(2*a);
        ip=sqrt(-disc)/(2*a);
        printf("The factors\nr1 is = %f+%fi\nr2 is = %f-%fi",rp,ip,rp,ip);
    }
    return 0;
}
