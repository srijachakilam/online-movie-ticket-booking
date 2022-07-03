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
			printf("%3d",j);
		}printf("\n");
	}
	for(i=1;i<=n;i++)
	{
		for(j=n;j>=i;j--)
		{
			printf("%3d",j);
		}printf("\n");
	}
}
