// Absolute value using fabs function

#include<stdio.h>
#include<math.h>

int main()
{
    float num1;
    double num2;
    printf("Enter the Negative float number: ");
    scanf("%f",&num1);
    printf("Enter the Negative double number : ");
    scanf("%lf",&num2);
    printf("\nActual Value = %f",num1);
    printf("\nActual Value = %lf",num2);
    float abNum = fabs(num1);
    double abNum2 = fabs(num2);
    printf("\nAbsolute Value = %f",abNum);
    printf("\nAbsolute Value = %lf",abNum2);
    return 0;
}
