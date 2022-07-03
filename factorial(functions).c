#include<stdio.h>
long long int factorial(long long int);
main()
{
	long long int a,c;
	printf("enter the number");
	scanf("%lld",&a);
	c=factorial(a);
	printf("factorial=%lld",c);
	
}
long long int factorial(long long int a)
{
	long long int i,fact=1;
	for(i=1;i<=a;i++)
	{
		fact=fact*i;
	}
	return fact;
}
