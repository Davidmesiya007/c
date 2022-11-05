//WAP to allow user to enter integers until he/she enters negative or zero.
#include<stdio.h>
int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    while(n!=0) {
        if(n>0) {
            printf("\nEnter the number: ");
            scanf("%d",&n);
        }

    }
    return 0;


}
