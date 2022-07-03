#include<stdio.h>
int a[10][10],b[10][10],i,j,m,n,c[10][10];
void read1(int,int,int[][10]);
void print1(int,int,int[][10]);
void read2(int,int,int[][10]);
void print2(int,int,int[][10]);
void sum(int,int,int[][10],int[][10],int[][10]);
main()
{
	int a[10][10],b[10][10],i,j,m,n,c[10][10];
	printf("enter the order");
	scanf("%d %d",&m,&n);
	printf("enter elements");
	read1(m,n,a);
	print1(m,n,a);
	printf("enter the order");
	scanf("%d %d",&m,&n);
	printf("enter elements");
	
	read2(m,n,b);
	print2(m,n,b);
	sum(m,n,a,b,c);
}
void read1(int m,int n,int a[][10])

{

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
}
void print1(int m,int n,int a[][10])
{
for(i=0;i<m;i++)
{
	for(j=0;j<n;j++)
	{
		printf("%3d",a[i][j]);
		
	}
	printf("\n");
	}	
}
void read2(int m,int n,int b[][10])
{

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
}
void print2(int m,int n,int b[][10])
{
for(i=0;i<m;i++)
{
	for(j=0;j<n;j++)
	{
		printf("%3d",b[i][j]);
		
	}
	printf("\n");

	}	printf("\n sum");
	printf("\n");	
}

void sum(int m,int n,int a[][10],int b[][10],int c[][10])
{
	
	for(i=0;i<m;i++)
	{
	
		for(j=0;j<n;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			printf("%3d",c[i][j]);
		}
		printf("\n");
		
	}
}
