#include<stdio.h>
main()
{
	int i,m=0;
	int sum=0;
	int n;
	printf("enter n");
	scanf("%d",&n);
	while(n>0)
	{
		i=n%100000;
		sum=sum+(i*i*i);
		n=n/10;
		
	}
	if(m==sum)
	{
		printf("valid");
	}
	else
	{
		printf("in valid");
	}
}
