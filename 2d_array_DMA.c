#include<stdio.h>
#include<stdlib.h>
main()
{
	int a[10][10],*p,i,j,m,n;
	printf("enter m and n values");
	scanf("%d %d",&m,&n);
	p=(int*)malloc((m*n)*sizeof(int));
	
		printf("enter elements");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",p+(i*n+j));
		}
	} 
		printf("\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%4d",*(p+(i*n+j)));
		}
		printf("\n");
	}
}
