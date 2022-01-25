#include <stdio.h>
int main()
{
    int n=0,x=0;
    printf("Input nth value=\n");
    scanf("%d",&n);
    printf("\n");
    if(n%2!=0)
        x++;
    n=n/2;
    for(int i=1;i<=n;i++)
    {

        printf("%d\n",(i*i));
        printf("%d\n",(i*i*i));
        if(x==1&&i==n)
            printf("%d\n",((i+1)*(1+i)));
    }
}
