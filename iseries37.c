#include <stdio.h>
int main()
{
    int c=240,n=0;
    printf("Input nth value=\n");
    scanf("%d",&n);
    printf("\n");
    printf("240\n");
    for(int i=1;i<n;i++)
    {
        c=c/i;
        printf("%d\n",c);
    }
    return 0;

}
