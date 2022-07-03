#include<stdio.h>
main()
{
	int n,A,y,z,sum,x,i;
	printf("enter n");
	scanf("%d",&n);
	do
	{
		x=n%10;
		sum=sum+x;
		n=n/10;
	}while(n>0);
	y=((n%(100000))-(n%(10000))-10000);
	z=y*y*y;
	A=sum-y;
	if(A==z)
	{
		printf("valid");
		
	}
	else
	{
		printf("invalid");
	}
	
	
}
