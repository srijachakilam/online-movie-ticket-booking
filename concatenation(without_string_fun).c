#include<stdio.h>
main()
{
	char a[100],b[100];
	int i,l=0;
	printf("enter the first string");
	gets(a);
	printf("enter the second string");
	gets(b);
	
	for(i=0;b[i]!='\0';i++)
	{
		l++;
	}
	for(i=0;a[i]!='\0';i++)
	{
		b[l]=a[i];
		l++;
	}
	b[l]='\0';
	puts(b);
}
