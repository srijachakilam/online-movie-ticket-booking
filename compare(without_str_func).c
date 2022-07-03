#include<stdio.h>
main()
{
	char a[100],b[100];
	int i,j=0,l1=0,l2=0,flag;
	printf("enter first string");
	gets(a);
	printf("enter second string");
	gets(b);
	for(i=0;a[i]!='\0';i++)
	{
		l1++;
	}
	for(j=0;b[j]!='\0';j++)
	{
		l2++;
	}
	for(i=0,j=0;a[i]!='\0';i++,j++)
	{
	
	if(l1!=l2)
	{
		flag=1;
		break;
	}
	else
	{
		if(a[i]!=b[j])
		{
			flag=1;
			break;
		}
	}
}
	if(flag==1)
	{
		printf("unequal");
	}
	else
	{
		printf("equal");
	}
}
