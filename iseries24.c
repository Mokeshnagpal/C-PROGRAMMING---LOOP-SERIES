#include<stdio.h>
main()
{
	int a=0,b=2,c=6,i,n,j;
	printf("Enter the range=");
	scanf("%d",&n);
	printf("%d\t %d\t",a,b);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=2;j++)
		{
			b=b+c;
			printf("%d\t",b);
		}
		c=c+4;
    }
}

