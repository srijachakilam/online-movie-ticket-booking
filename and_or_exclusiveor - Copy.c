#include<stdio.h>
main()
{
	int a;
	int b;
	int c;
	int d;
	int e;
	printf("enter a");
	scanf("%d",&a);
printf("enter b");
scanf("%d",&b);
	c=a&b;
	d=a|b;
	e=a^b;
	printf("AND OPERATOR=%d",c);
	printf("OR OPERATOR=%d",d);
	printf("EXCLUSIVE OR=%d",e);	
}
