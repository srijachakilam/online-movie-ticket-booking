#include<stdio.h>
main()
{
	int a[10][10],i,j,m,n,k,l,o,p,b[10][10];
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
			printf("%3d",a[i][j]);
		}
		printf("\n");
		
	}
	printf("enter order of second matrix");
	scanf("%d %d",&o,&p);
	printf("enter elements of second matrix");
	
	for(k=0;k<o;k++)
	{
		for(l=0;l<p;l++)
		{
			scanf("%d",&b[k][l]);
		}
	}
	
	for(k=0;k<o;k++)
	{
		for(l=0;l<p;l++)
		{
			printf("%3d",b[k][l]);
		}
		printf("\n");
		
	}
	
	
}
