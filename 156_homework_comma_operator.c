#include<stdio.h>
int main() {
    int num;
    int var;
    num = (var = 15, var+35);
    printf("%d",var);
    printf("%d",num);
    return 0;
}
