#include<stdio.h>
int i,j;
void display(int,int,int[][10]);
main()
{
	int a[10][10],m,n,i,j;
	printf("enter the order");
	scanf("%d %d",&m,&n);
	printf("enter elements");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	display(m,n,a);
}
void display(int m,int n,int a[][10])
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
