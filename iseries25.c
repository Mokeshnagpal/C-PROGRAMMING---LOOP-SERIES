#include <stdio.h>
int main()
{
    int n=0,x=28,z=5,y=2;
    printf("Input nth value=\n");
    scanf("%d",&n);
    printf("\n");
    for(int i=1;i<=n;i++)
    {
        printf("%d\n",x);
        if(i%2!=0)
        x=x+z;
        else
        x=x-y;
    }
    return 0;
}
