#include<stdio.h>
main()
{
	int a[10],*p[10],i,n,sum=0,*s;
	printf("enter n value");
	scanf("%d",&n);
	s=&sum;
	printf("enter elements");
	for(i=0;i<n;i++)
	{
		p[i]=&a[i];
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",p[i]);
	}
	for(i=0;i<n;i++)
	{
	*s=*s+*p[i];	
	}
	printf("sum of array elements=%d",*s);
}
