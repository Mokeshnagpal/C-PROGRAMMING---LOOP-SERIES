#include <stdio.h>
int main()
{
    int n=0,x=1,z=3;
    printf("Input nth value=\n");
    scanf("%d",&n);
    printf("\n");
    for(int i=1;i<=n;i++)
    {
        printf("%d\n",x);
        x=x+z;
        z=z+z;
    }
    return 0;
}
