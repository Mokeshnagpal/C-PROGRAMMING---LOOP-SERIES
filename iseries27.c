#include <stdio.h>
int main()
{
    int n=0,x=2,z=13;
    printf("Input nth value=\n");
    scanf("%d",&n);
    printf("\n");
    for(int i=1;i<=n;i++)
    {
        printf("%d\n",x);
        x=x+z;
        z+=13;
    }
    return 0;
}
