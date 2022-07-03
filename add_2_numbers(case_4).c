#include<stdio.h>
float add(int,float);
main()
{
	int a;
	float b;
	float c;
	printf("enter two numbers");
	scanf("%d %f",&a,&b);
	c=add(a,b);
	printf("%f",c);
}
float add(int a,float b)
{
	float c;
	c=a+b;
	return c;
}
