#include<stdio.h>
int main() {
    int a = 5, b = 4;
    int incr;
    incr = (a>b) && (b++);
    printf("%d",incr);
    printf("\n%d",b);
    return 0;
}
