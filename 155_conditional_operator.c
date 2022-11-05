#include<stdio.h>
int main() {
    int var = 75;
    int var2 = 56;
    int num;
    num = sizeof(var) ? (var > 23 ? ((var == 75) ? 'A':0):0):0;
    printf("Num = %d",num);
    return 0;
}
