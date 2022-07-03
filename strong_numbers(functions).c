#include<stdio.h>
int strong(int);
main()
{
	int n,m,c;
	printf("enter the number");
	scanf("%d",&n);
	m=n;
	c=strong(n);
	if(c==m)
	{
		printf("strong number");
	}
	else
	{
		printf("not a strong number");
	}
}
int strong(int n)
{
	int sum,fact=1,i,x;
	for(sum=0;n>0; )
	{
		x=n%10;
		for(x=0;x<=n;x++)
		{
		
		fact=fact*x;
	    }
		sum=sum+fact;
		n=n/10;
	}
	return sum;
}
