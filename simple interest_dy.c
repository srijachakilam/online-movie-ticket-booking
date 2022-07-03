#include<stdio.h>
main()
{
	int P;
	int T;
	int r;
	float si;
	
	printf("enter P");
	scanf("%d",&P);
	printf("enter T");
	scanf("%d",&T);
	printf("enter r");
	scanf("%d",&r);
	si=(P*T*r)/100;
	printf("the simple interest=%f",si);
	
	
}
