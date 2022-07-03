#include<stdio.h>
main()
{
	int n,i,sum=0;
	printf("enter n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+pow(i,i);
	}
		printf("result=%d",sum);
}
