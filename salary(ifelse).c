#include<stdio.h>
main()
{
	int s;
	char g;
	int m,f;
	printf("enter s and g");
	scanf("%d%c",&s,&g);
	if(g=='m')
	{
		printf("salary=%d",s+500);
		
	}
	else
	{
		printf("salary=%d",s+1000);
	}
}
