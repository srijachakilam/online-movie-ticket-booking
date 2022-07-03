#include<stdio.h>
main()
{
	int sum,m,n,x;
	printf("enter n");
	scanf("%d",&n);
	m=n;
	for(sum=0;n>0;n=n/10)
	{
		x=n%10;
		sum=sum+(x*x*x);
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
