#include<stdio.h>
#include<limits.h>
#include<float.h>
int main () {
printf("\nsize of short integer %u bytes %d to %d ",sizeof(short int),SHRT_MIN,SHRT_MAX);
printf("\nsize of unsigned short integer %u bytes 0 to %u",sizeof(unsigned short int), USHRT_MAX);
printf("\nsize of integer %u bytes %d to %d",sizeof(int),INT_MIN,INT_MAX);
printf("\nsize of unsigned integer %u bytes 0 to %u",sizeof(unsigned int),UINT_MAX);
printf("\nsize of long integer %u bytes %ld to %ld",sizeof(long int),LONG_MIN,LONG_MAX);
return 0;
}
