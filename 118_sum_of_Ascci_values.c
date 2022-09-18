#include<stdio.h>
char main()
{
    char a[100];
    int i=0,sum=0;
    printf("\nEnter the word: ");
    scanf("%s",a);
    while(a[i]!='\0')
    {
        printf("\nThe ASCCI values of %c is = %d",a[i],a[i]);
        sum=sum+a[i];
        i++;

    }
    printf("\nThe sum of ASCCI value is = %d",sum);
    return 0;
}

