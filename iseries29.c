#include <stdio.h>
int main()
{
    int n=0,x=325,z=66;
    printf("Input nth value=\n");
    scanf("%d",&n);
    printf("\n");
    for(int i=1;i<=n;i++)
    {
        printf("%d\n",x);
        x=x-z;
        z=z-11;
    }
    return 0;
}
