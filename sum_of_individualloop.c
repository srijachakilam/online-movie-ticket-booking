#include<stdio.h>
main()
{
	int sum=0;
	int n,x;
	printf("enter n");
	scanf("%d",&n);
	while(n>0)
	{
		x=n%10;
		sum=sum+x;
		n=n/10;
	}
	printf("sum=%d",sum);
}
