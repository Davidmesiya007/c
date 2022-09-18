#include<stdio.h>
int main()
{
    char str[100];
    int i=0;
    printf("Enter the word : ");
    scanf("%s",str);
    while(str[i]!='\0')
    {
            printf("\nASCCI value of %c is =%d",str[i],str[i]);
            i++;
    }

    return 0;
}
