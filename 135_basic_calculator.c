#include<stdio.h>
int main()
{
    int num1,num2,choice,result;
    float value;
    printf("\nEnter your first number: ");
    scanf("%d",&num1);
    printf("\nEnter your second number: ");
    scanf("%d",&num2);
    printf("\nChoose your operation\n1.Addition\n2.Subraction\n3.Multibilication\n4.Division\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        result = num1+num2;
        printf("\nSum of the %d and %d is = %d",num1,num2,result);
        break;
    case 2:
        result = num1-num2;
        printf("\nSubtraction of the %d and %d is = %d",num1,num2,result);
        break;
    case 3:
        result = num1*num2;
        printf("Multiplication of the %d and %d is = %d",num1,num2,result);
        break;
    case 4:
        result = num1/num2;
        printf("\nDivision of the %d and %d is = %0.2f",num1,num2,value);
        break;
    default:
        printf("\nInvalid Choice. \nPlease choose the given choice only");


    }

    return 0;
}
