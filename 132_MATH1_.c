#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y;

        scanf("%d%d",&x,&y);
        if(x>y)
        {
            x=0;
            printf("%d\n",x);
        }
        else
        {
            printf("%d\n",y-x);
        }
    }
	return 0;
}
