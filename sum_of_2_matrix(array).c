#include<stdio.h>
main()
{
	int a[10][10],i,j,m,n,k,l,b[10][10],c[10][10];
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
	
	printf("\n enter order of second matrix");
	scanf("%d %d",&m,&n);
	printf("enter elements of second matrix");
	
	for(k=0;k<m;k++)
	{
		for(l=0;l<n;l++)
		{
			scanf("%d",&b[k][l]);
		}
	}
	
		printf("\n");
		printf("\nsum");
			printf("\n");
	for(i=0,k=0;i<m,k<m;i++,k++)
	{
	
		for(j=0,l=0;j<n,l<n;j++,l++)
		{
			c[i][j]=a[i][j]+b[i][j];
			printf("%3d",c[i][j]);
		}
		printf("\n");
		
	}
	
}
