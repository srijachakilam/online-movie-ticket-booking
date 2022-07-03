#include<stdio.h>
main()
{
	int n,*p,fact=1,i;
	p=&n;
	printf("enter the number");
	scanf("%d",p);
	for(fact=1;i<=*p;i++)
	{
		fact=fact*i;
	}
	printf("factorial=%d",fact);
}
