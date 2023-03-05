#include<stdio.h>
int main()
{
    int age = 30;
    printf("%d",&age);
    int oldAge = age;
    printf("\n%d",&oldAge);
    age = 31;
    printf("\n%d",&age);
    printf("a : %d",age);
    printf("b : %d",oldAge);
}
