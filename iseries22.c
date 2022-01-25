#include <stdio.h>
int main()
{
    int n=0,x=4832;
    printf("Input nth value=\n");
    scanf("%d",&n);
    printf("\n");
    for(int i=1;i<=n;i++)
    {
        printf("%d\n",x);
        x=x+1008;
    }
    return 0;
}
