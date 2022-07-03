#include<stdio.h>
main()
{
	int n;
	char a[100],b[100];
	printf("enter the first string");
	gets(a);
	printf("enter  the second string");
	gets(b);
	n=strstr(a,b);
	if(n==0)
	{
		printf("substring is not present");
	}
	else
	printf("substring is present");
	
}
