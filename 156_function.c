#include<stdio.h>
int fun2();
int fun1();
int main() {
    int a;
    a = fun1()+fun2();
    printf("%d",a);
}

int fun2() {
    printf("Academy");
    return 1;
}
int fun1() {
    printf("Neso");
    return 1;
}
