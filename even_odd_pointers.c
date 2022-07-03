#include<stdio.h>
main()
{
	int a,* p1;
	p1=&a;
	printf("enter the number");
	scanf("%d",p1);
	if(*p1%2==0)
	{
		printf("even number");
	}
	else
	{
		printf("odd number");
	}
}
