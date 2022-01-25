#include <stdio.h>
int main()
{
    int c=1,n=0;
    printf("Input nth value=\n");
    scanf("%d",&n);
    printf("\n");
    printf("1\n");
    for(int i=1;i<n;i++)
    {
        c=c*i;
        printf("%d\n",c);
    }
    return 0;

}
