#include<stdio.h>
main()
{
	int a,b,c,*p1,*p2,*p3;
	p1=&a;
	p2=&b;
	p3=&c;
	printf("enter two numbers");
	scanf("%d %d",p1,p2);
	
	*p3=*p1+*p2;
	printf("addition=%d",*p3);
}
