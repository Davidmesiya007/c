// Perform Arithmetic Operation

#include<stdio.h>
int main()
{
    int n;
    printf("\nEnter the size of the array : ");
    scanf("%d",&n);
    int first[n],second[n],addition[n],subtraction[n],multiplication[n],modulus[n];
    float division[n];
    printf("\nEnter the First Array Elements : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&first[i]);
    }
    printf("\nEnter the Second Array Elements : ");
    for(int j=0;j<n;j++)
    {
        scanf("%d",&second[j]);
    }

    for(int i = 0;i<n;i++)
    {
        addition[i] = first[i] + second[i];
        subtraction[i] = first[i] - second[i];
        multiplication[i] = first[i] * second[i];
        division[i] = (float)first[i] / (float)second[i];
        modulus[i] = first[i] % second[i];
    }
    printf("\nAdd\t Sub\t Mul\t div\t mod\n");
    for(int i = 0; i<n;i++)
    {
        printf("%d \t %d\t %d\t %.2f\t %d\n",addition[i],subtraction[i],multiplication[i],division[i],modulus[i]);
    }
    return 0;
}
