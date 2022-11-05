#include<stdio.h>
extern int i;
int i = 10;
extern int i;
int main() {
    printf("%d",i);

}
