#include<stdio.h>
main()
{
	int a[10];
	int i,n,sum=0;
	printf("enter n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
		
	}
	printf("sum=%d\n",sum);
	printf("avg=%d\n",(sum/n));
}
