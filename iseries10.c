#include <stdio.h>
int main()
{
    int n=0,x=0,y=-1;
    printf("Input nth value=\n");
    scanf("%d",&n);
    printf("\n");
    do
    {
        x++;
        y+=2;
        if(x!=n)
        printf("%d,",y);
        else
        printf("%d",y);
    }
    while(x!=n);
}
