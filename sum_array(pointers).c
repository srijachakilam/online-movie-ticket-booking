#include<stdio.h>
main()
{
	int a[10],i,sum=0,n,*p;
	printf("enter n");
	scanf("%d",&n);
	p=&a[0];
	printf("enter elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",(p+i));
	}
	for(i=0;i<n;i++)
	{
		sum=sum+*(p+i);
	}
	printf("sum=%d",sum);
}
