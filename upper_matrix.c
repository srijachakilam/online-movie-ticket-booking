#include<stdio.h>
main()
{
	int a[10][10],i,j,m,n;
	printf("enter order of matrix");
	scanf("%d %d",&m,&n);
	printf("enter elements");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n");
	for(i=0;i<m;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
		{
			if(i<=j)
			{
				
				printf("%d",a[i][j]);
			}
			else
			{
				printf(" ");
			}
			
			
		}
	}
	
}
