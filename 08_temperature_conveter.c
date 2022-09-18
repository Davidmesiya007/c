/*
faranheit to cendigrade formula = ((value in faranheit - 32)*(5/9) );
*/
#include<stdio.h>
int main()
{
int faran;
float celsius;
printf("\nEnter the temperature in faranheit : ");
scanf("%d",&faran);
celsius = (faran-32)*(5.0/9.0);
printf("\n%d faranheit in  celsius is = %0.2f",faran,celsius);

return 0;
}
