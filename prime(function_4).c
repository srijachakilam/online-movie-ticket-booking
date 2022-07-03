#include<stdio.h>
int prime(int);
main()
{
	int n,c;
	printf("enter the number");
	scanf("%d",&n);
	c=prime(n);
	if(c==2)
	{
		printf("prime");
		
	}
	else
	{
		printf("not a prime");
	}
}
int prime(int n)
{
	int i,count=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
			
		}
		
		
	}
	return count;
}
