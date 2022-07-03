#include<stdio.h>
main()
{
	int a[10][10],b[10][10],c[10][10],*p1,*p2,*p3,m,n,i,j;
	printf("enter the order");
	scanf("%d %d",&m,&n);
	p1=&a[0][0];
	printf("enter the elements of first matrix");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",p1+(i*n+j));
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%4d",*(p1+(i*n+j)));
		}
		printf("\n");
	}
	printf("enter the order");
	scanf("%d %d",&m,&n);
	p2=&b[0][0];
	printf("enter the elements of second matrix");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",p2+(i*n+j));
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
				printf("%4d",*(p2+(i*n+j)));
		}
			printf("\n");
	}
	printf("\n"); 
	printf("sum");
	printf("\n");  
	p3=&c[0][0];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		    *p3=*p1+*p2;
			printf("%3d",*(p3+(i*n+j)));
		}
		printf("\n");	
	}
	
	
}
