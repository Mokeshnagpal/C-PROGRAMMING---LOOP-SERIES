#include <stdio.h>
int main()
{
    for(int i=5760,j=6;i>=8;i/=j,j--)
        printf("%d\n",i);
    return 0;
}
