#include<stdio.h>
main()
{
	int a[10][10],*p,m,n,i,j;
	printf("enter the order");
	scanf("%d %d",&m,&n);
	p=&a[0][0];
	printf("enter the elements");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",p+(i*n+j));
		}
	}

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i<=j)
			{
			printf("%d",*(p+(i*n+j)));
	        }
	        else
	        {
			printf(" ");
		    }
		}
		printf("\n");
	}
}
