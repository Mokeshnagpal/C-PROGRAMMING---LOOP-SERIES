#include <stdio.h>
int main()
{
    int n=0,x=1,y=2,m=0;;
    printf("Input nth value=\n");
    scanf("%d",&n);
    printf("\n");
    while(x<=n)
    {
        for(int i=2;i<y;i++)
        {
            if(y%i==0)
            m++;
        }
        if(m==0)
        {
            printf("%d\n",(y*y));
            x++;
        }
        m=0;
        y++;
    }

    return 0;
}
