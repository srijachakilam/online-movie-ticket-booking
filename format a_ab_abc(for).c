#include<stdio.h>
main()
{
	int i,j,n;
	printf("enter n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%3c",(j+96));
		}
		printf("\n");
	}
}
