#include<stdio.h>
main()
{
	int i,j,n,c=1;
	printf("enter n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=3;j++,c++)
		{
			printf("%3d",c);
			
		}
		printf("\n");
	}
}
