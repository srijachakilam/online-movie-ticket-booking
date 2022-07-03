#include<stdio.h>
main()
{
	int n,s=0,m,x;
	printf("enter n");
	scanf("%d",&n);
	m=n;
	do
	{
		x=n%10;
		s=s+(x*x*x);
		n=n/10;
	}while(n>0);
	if(m==s)
	{
		printf("armstrong");
	}
	else
	{
		printf("not an armstong");
	}
	
}
