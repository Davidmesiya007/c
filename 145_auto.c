#include<stdio.h>
int var = 34;
int main() {
    extern int var;
    printf("%d",var);
    return 0;
}
