#include <stdio.h>
int main()
{
    int a=5,j=0,n=0;
    printf("Input nth number of value =");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("%d\n",a);
        j=j+i;
        a=a+j;
    }
}
