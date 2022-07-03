#include<stdio.h>
main()
{
	int c,s;
	printf("enter cost price");
	scanf("%d",&c);
	printf("enter selling price");
	scanf("%d",&s);
	if((s-c)>=0)
	{
		printf("profit");
		printf("\n%d",s-c);
				
	}
	else
	{
		printf("loss");
		printf("\n%d",c-s);
	}
	
}
