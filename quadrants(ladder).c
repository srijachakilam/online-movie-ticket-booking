#include<stdio.h>
main()
{
	int x,y;
	printf("enter x");
	scanf("%d",&x);
	printf("enter y");
	scanf("%d",&y);
	if(x>0&&y>0)
	{
		printf("1st quad");
	}
	else if(x<0&&y>0)
	{
		printf("2nd quad");
	}
	else if(x<0&&y<0)
	{
		printf("3rd quad");
	}
	else if(x>0&&y<0)
	{
		printf("4th quad");
	}
	else
	{
		printf("origin");
	} 
}
