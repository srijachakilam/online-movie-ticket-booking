#include<stdio.h>
int sum(int);
main()
{
	int n,c;
	printf("enter the number");
	scanf("%d",&n);
	c=sum(n);
	
	if(n==c)
	{
		printf("armstrong");
		
	}
	else
	{
		printf("not an armstrong");
	}
}
	int sum(int n)
	{
		int sum,x;
		for(sum=0;n>0; )
		{
			x=n%10;
			sum=sum+(x*x*x);
			n=n/10;
		}
	return sum;
}
