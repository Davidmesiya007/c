#include <stdio.h>

int main(void) {
    int T,a;
    printf("\nEnter the number of test cases : ");
    scanf("%d",&T);
    while(T--)
    {
        printf("\nEnter your chef temperature: ");
        scanf("%d",&a);
        if(a>98)
        {
            printf("\nYES");
        }
        else
        {
            printf("\nNO");
        }


    }
	// your code goes here
	return 0;
}


