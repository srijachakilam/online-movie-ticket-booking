#include<stdio.h>
main()
{
	int a;
	printf("enter a");
	scanf("%d",&a);
	if(a>0&&a%2==0)
	{
		printf("it is positive even number");
	}
	else if(a>0&&a%2==!0)
	{
		printf("it is positive odd number");
	}
	else if(a<0&&a%2==0)
	{
		printf("it is negative even number");
	}
	else if(a<0&&a%2==!0)
	{
		printf("it is negative odd number");
	}
	else
	{
		printf("it is even");
	}
	
}
