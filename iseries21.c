#include <stdio.h>
int main()
{
    int n=0,x=22,z=2;
    printf("Input nth value=\n");
    scanf("%d",&n);
    printf("\n");
    for(int i=1;i<=n;i++)
    {
        printf("%d\n",x);
        x=x+z;
        z=z*2;
    }
    return 0;
}
