#include<stdio.h>
int main()
{
    int age;
    char name[10];
    printf("\nEnter your name : ");
    scanf("%s",name);
    printf("\nEnter your age : ");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("\n%s age is %d eligible for vote.",name,age);
    }
    else
    {
        printf("\n%s is age is %d not eligible for vote",name,age);
    }
    return 0;
}
