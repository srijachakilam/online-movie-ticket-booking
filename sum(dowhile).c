#include<stdio.h>
main()
{
	int i=0,sum=0,n;
	printf("enter n");
	scanf("%d",&n);
	do
	{
		sum=sum+i;
		i++;
	}while(i<=n);
	printf("sum=%d",sum);
	printf("avg=%d",sum/n);
}
