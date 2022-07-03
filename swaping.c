#include<stdio.h>
main()
{
	int a;
	int b;
	int c;
	printf("enter a");
	scanf("%d",&a);
	printf("enter b");
	scanf("%d",&b);
	
	c=a;
	a=b;
	b=c;
	
	printf("value of a=%d",a);
	printf("value of b=%d",b);
}
