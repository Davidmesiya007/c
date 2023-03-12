#include<stdio.h>

int input(char str[],int n)
{
    char ch;
    int i=0;
    while(ch=getchar()!='\n')
    {
        if(i<n)
        {
            str[i++]=ch;
        }
    }
    str[i]='\0';
    return str;
}

int main()
{
    char str[100];
    int n;
    n = input(str,5);
    printf("n = %d and input = %s",n,str);
    return 0;
}
