#include<stdio.h>
int main()
{
    char str[100];
    int countAl=0,countDi=0,countSp=0;
    printf("Enter the string : ");
    gets(str);
    for(int i=0;str[i]!='\0';i++)
    {
        if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z'))
            countAl++;
        else if(str[i]>='0' && str[i]<='9')
            countDi++;
        else
            countSp++;
    }
    printf("Counting of Alphabets : %d\n",countAl);
    printf("Counting of Digits : %d\n",countDi);
    printf("Counting of Special Character : %d",countSp);
    return 0;

}
