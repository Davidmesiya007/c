#include<stdio.h>
int main(){
    int a = 5;
    printf("\n%d",a++);
    printf("\n%d",a);
    printf("\n%d",++a);
    printf("\n%d",a);
    printf("\n%d",--a);
    printf("\n%d",a);
    printf("\n%d",a--);
    printf("\n%d",a);
    printf("\na++ + ++a = %d",a++ + ++a);
    printf("\na-- - --a = %d",a-- - --a);

    return 0;
}
