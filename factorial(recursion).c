#include<stdio.h>
int factorial(int);
main()
{
	int fact,n;
	printf("enter n");
	scanf("%d",&n);
	fact=factorial(n);
	printf("factorial=%d",fact);
	
}
int factorial(int n)
{
	if(n==1)
	{
		return 1;
	}
	else
     {
     	return (n*factorial(n-1));
	 }
	
}
