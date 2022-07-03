#include<stdio.h>
main()
{
	int i,j,n;
	printf("enter n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		
		for(j=n;j>(n-i);j--)
		{
			printf("%3d",j);
		}
	printf("\n");
	}
}
