#include <stdio.h>
int main()
{
    int n=0;
    printf("Input nth value=\n");
    scanf("%d",&n);
    printf("\n");
    for(int i=1;i<=n;i++)
    {
        if(i!=n)
        printf("%d,",(i*i));
        else
            printf("%d",(i*i));
    }
}
