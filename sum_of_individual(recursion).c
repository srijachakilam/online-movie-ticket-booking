#include<stdio.h>
int sum(int);
main()
{
	int x,z,n;
	printf("enter n");
	scanf("%d",&n);
	z=sum(n);
	printf(" sum=%d",z);
}
int sum(int n)
{
	if(n==0)
	{
		return;
	}
	else
	{
		return((n%10)+sum(n/10));
	}
}
