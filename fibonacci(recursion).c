#include<stdio.h>
int fib(int);
main()
{
	int i,n,z;
	printf("enter n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		z=fib(i);
		printf("%5d",z);
	}
}
int fib(int n)
{

     if((n==0)||(n==1))
       return n;
       else
       {
       	return (fib(n-1)+fib(n-2));
	   }
	
}
