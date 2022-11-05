#include<stdio.h>
int main() {
    int n;
    printf("\nEnter the Number: ");
    scanf("%d",&n);
    for(int i=n;i>0 && i!=0; )
    {
        printf("Enter the number: ");
        scanf("%d",&i);
    }
    return 0;
}
