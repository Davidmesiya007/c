#include<stdio.h>
int main()
{
    int tamil,english,maths,science,social_science,sum;
    float average;
    printf("Enter your marks getting in tamil : ");
    scanf("%d",&tamil);
    printf("Enter your marks getting in english : ");
    scanf("%d",&english);
    printf("Enter your marks getting in maths : ");
    scanf("%d",&maths);
    printf("Enter your marks getting in science : ");
    scanf("%d",&science);
    printf("Enter your marks getting in social science : ");
    scanf("%d",&social_science);
    sum=tamil+english+maths+science+social_science;
    average=sum/5;
    printf("\nTotal marks is = %d",sum);
    printf("\nAverage mark is = %0.2f",average);

    return 0;
}
