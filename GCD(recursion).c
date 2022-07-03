#include<stdio.h>
int GCD(int,int);
main()
{
	int a,b,g;
	printf("enter the two numbers");
	scanf("%d %d",&a,&b);
	g=GCD(a,b);
	printf("GCD=%d",g);
	
}
int GCD(int a,int b)
{
	if(b==0)
	{
		return a;
	}
	else
	return GCD(b,a%b);
}
