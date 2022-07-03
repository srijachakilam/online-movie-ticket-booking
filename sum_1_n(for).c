//sum of 1+1/2+1/3+......1/n series
#include<stdio.h>
main()
{
	int i,n;
	float sum=0;
	printf("enter n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+(1.0/i);
		
	}
	printf("sum=%f",sum);
}
