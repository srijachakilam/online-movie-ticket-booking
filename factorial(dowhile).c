#include<stdio.h>
main()
{
	long long int i=1,n;
	int fact=1;
	printf("enter n");
	scanf("%lld",&n);
	do
	{
		fact=fact*i;
		i++;
	}while(i<=n);
	printf("factorial=%lld",fact);
}
