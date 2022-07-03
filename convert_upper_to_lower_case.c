#include<stdio.h>
main()
{
	char ch; 
	printf("enter the character");
	scanf("%c",&ch);
	
	if(ch>='a'&&ch<='z')
	{
		printf("result=%c",ch-32);
	}
	else
	{
		printf("result=%c",ch+32);
	}
}
