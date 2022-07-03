#include<stdio.h>
float add();
main()
{
	float z;
	z=add();
	printf("%f",z);
}
float add()
{
	int a;
	float b,c;
	printf("enter two numbers");
	scanf("%d %f",&a,&b);
	c=a+b;
	return c;
}
