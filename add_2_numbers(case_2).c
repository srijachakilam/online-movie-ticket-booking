#include<stdio.h>
void sum(int,float);
main()
{
	int p;
	float q;
	printf("enter two numbers");
	scanf("%d %f",&p,&q);
	sum(p,q); 
}
void sum(int p,float q)
{
	float z;
	z=p+q;
	printf("%f",z);
}
