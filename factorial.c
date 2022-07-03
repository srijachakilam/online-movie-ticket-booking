#include<stdio.h>
main()
{
	int i=1,n,fact=1;
	
	printf("enter value of n");
	scanf("%d",&n);
	while(1<=n)
	{
		fact=fact*i;
		i++;
	}
	printf("factorial=%d",fact);
}
