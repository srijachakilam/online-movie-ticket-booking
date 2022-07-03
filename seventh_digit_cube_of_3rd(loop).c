#include<stdio.h>
main()
{
	int n,A,y,z,sum,x;
	int i;
	printf("enter n");
	scanf("%d",&n);
	while(n>0)
	
	{
		x=n%10;
		sum=sum+x;
		n=n/10;
	}
	y=(n%100000)-(n%10000);
	z=y*y*y;
	A=sum-y;
	if(A==sum)
	{
		printf("valid");
	}
	else
	{
		printf("non-valid");
	}
	
}
