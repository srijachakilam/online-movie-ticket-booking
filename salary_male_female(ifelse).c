#include<stdio.h>
main()
{
	int s;
	char g;
	int m,f;
	printf("enter s ");
	scanf("%d",&s);
	printf("enter g");
	scanf("%c",&g);
	if(g=='m')
	{
		printf("salary=%d",s+500);
		
	}
	else
	{
		printf("salary=%d",s+1000);
	}
}
