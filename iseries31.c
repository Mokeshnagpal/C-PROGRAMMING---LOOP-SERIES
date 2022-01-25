#include <stdio.h>
int main()
{
    int n=0;
    double x=0.5,z=0.05,y=0.0;
    printf("Input nth value=\n");
    scanf("%d",&n);
    printf("\n");
    for(int i=1;i<=n;i++)
    {
        printf("%0.2lf\n",x);
        y=z*i;
        x=x+y;
    }
    return 0;
}
