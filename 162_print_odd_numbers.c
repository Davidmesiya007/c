//WAP to print all the odd numbers from 1 to 20
#include<stdio.h>
int main() {
    int i=0;
    for(i=0;i<=20;i++)
    {
        if(i%2==0)
        {
            continue;
        }
        printf(" %d",i);

    }

    return 0;
}
