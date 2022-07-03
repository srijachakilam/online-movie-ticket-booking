#include<stdio.h>
main()
{
	char a[100],b[100];
	int i,j=0,l=0;
	printf("enter the string");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		l++;
	}
	for(i=0;i<=l;i++)
	{
		b[j]=a[i];
		j++;
	}

	puts(b);
}
