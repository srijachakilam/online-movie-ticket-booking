#include<stdio.h>
main()
{
	float a,b,c,*p1,*p2,*p3;
	
	p1=&a;
	p2=&b;
	p3=&c;
	printf("enter floating values");
	scanf("%f %f",p1,p2);
	*p3=*p1+*p2;
	printf("addition=%f",*p3);
	
}
