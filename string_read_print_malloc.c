#include<stdio.h>
#include<stdlib.h>
main()
{
	int n,i;
	char*p;
	printf("enter size");
	scanf("%d",&n);
	p=(char*)malloc(n*sizeof(char));
	printf("enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%c",p+i);
		
	}
	for(i=0;i<n;i++)
	{
		printf("%c",*(p+i));
		
	}
}

