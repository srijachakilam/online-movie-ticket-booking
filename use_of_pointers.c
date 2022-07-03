#include<stdio.h>
main()
{
	int a;
	int*p;
	a=14;
	p=&a;
	printf("\n%d",&a);
	printf("\n%d",&p);
	printf("\n%d",a);
	printf("\n%d",*p);
	printf("\n%u",p);
	printf("\n%d",*(&a));
	printf("\n%d",&p);
}
