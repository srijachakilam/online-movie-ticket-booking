#include<stdio.h>
main()
{
	int r;
	printf("enter r");
	scanf("%d",&r);
	if(r<=40)
	{
		printf("salary=%d",100*r);
	}
	else
	{
		printf("salary=%d",((100*r)+((r-40)*12)));
	}
}
