#include<stdio.h>
main()
{
	int i,sum=0,n;
	printf("enter n");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("sum=%d",sum);
	printf("avg=%d",(sum/n));
}
