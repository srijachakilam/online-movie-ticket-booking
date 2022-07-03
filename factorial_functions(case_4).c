#include<stdio.h>
int factorial(int a);
main()
{
	int a,c;
	printf("enter the number");
	scanf("%d",&a);
	c=factorial(a);
    printf(" factorial=%d",c);
		
}
int factorial(int a)
{
	int i,fact=1;
	for(i=1;i<=a;i++)
	{
		fact=fact*i;
		
	}
	return fact;
}

