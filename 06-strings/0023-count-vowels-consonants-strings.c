#include<stdio.h>
int main()
{
    char str1[100];
    int vowel=0,consonant=0;
    printf("Enter the string : ");
    gets(str1);
    for(int i=0;str1[i]!='\0';i++)
    {
        if(str1[i]=='a' || str1[i]=='e' || str1[i]=='i' || str1[i]=='o'|| str1[i]=='u' || str1[i]== 'A'|| str1[i]=='E'|| str1[i]=='I'|| str1[i]=='O'|| str1[i]=='U' )
            vowel++;
        else
            consonant++;
    }
    printf("Vowal count  is = %d\n",vowel);
    printf("Consonant count is = %d",consonant);

}
