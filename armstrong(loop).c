#include<stdio.h>
main()
{
	int m,x;
	int sum=0;
	int n;
	printf("enter n");
	scanf("%d",&n);
	m=n;
	while(n>0)
	{
		x=n%10;
		sum=sum+(x*x*x);
		n=n/10;
	}
	if(m==sum)
	{
		printf("armstrong");
	}
	else
	{
		printf("not an armstrong");
	}
}
