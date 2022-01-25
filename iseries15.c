#include <stdio.h>
int main()
{
    int n=0,x=11;
    printf("Input nth value=\n");
    scanf("%d",&n);
    printf("\n");
    for(int i=1;i<=n;i++)
    {
        printf("%d\n",x);
        if(i%2!=0)
            x+=2;
        else
            x+=4;
    }
    return 0;
}
