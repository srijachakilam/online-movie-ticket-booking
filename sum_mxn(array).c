#include<stdio.h>
main()
{
	int a[10][10],i,j,m,n,sum=0;
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
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			sum=sum+a[i][j];
		}
	}printf("sum=%d",sum);
	
}
