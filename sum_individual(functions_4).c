#include<stdio.h>
int sum(int);
main()
{
	int n,c;
	printf("enter the number");
	scanf("%d",&n);
	c=sum(n);
	printf("%d",c);
	
}
int sum(int n)
{
	int x,s;
	for(s=0;n>0;n=n/10)
	{
		x=n%10;
		s=s+x;
	}
	return s;
}

