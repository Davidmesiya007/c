#include<stdio.h>
#include<limits.h>
int main() {
    printf("\nSize of integer is = %d",sizeof(int));
    printf("\nSize of Unsigned integer is = %u",sizeof(unsigned int));
    printf("\nSize of float is = %d",sizeof(float));
    printf("\nSize of the double is = %d",sizeof(double));
    printf("\nSize of the long integer is = %d",sizeof(long int));
    printf("\nSize of the long long integer is = %d",sizeof(long long int));
    printf("\nSize of the long double integer is = %d",sizeof(long double));
    printf("\nRange of unsigned integer is %u to %u",0,UINT_MAX);
    printf("\nRange of signed integer is %d to %d",INT_MIN,INT_MAX);
    printf("\nRange of unsigned short integer is %u to %u",0,USHRT_MAX);
    printf("\nRange of short integer is %d to %d",SHRT_MIN,SHRT_MAX);

    return 0;
}
