#include<stdio.h>
int i,j,p,q;
void read1(int,int,int[][10]);
void print1(int,int,int[][10]);
void read2(int,int,int[][10]);
void print2(int,int,int[][10]);
main()
{
	int a[10][10],b[10][10],i,j,m,n,p,q;
	printf("enter the order");
	scanf("%d %d",&m,&n);
	printf("enter elements");
	read1(m,n,a);
	print1(m,n,a);
	printf("enter the order");
	scanf("%d %d",&p,&q);
	printf("enter elements");
	
	read2(p,q,b);
	print2(p,q,b);
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
void read2(int p,int q,int b[][10])
{

	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
}
void print2(int p,int q,int b[][10])
{
for(i=0;i<p;i++)
{
	for(j=0;j<q;j++)
	{
		printf("%3d",b[i][j]);
		
	}
	printf("\n");
	}	
}
