#include<stdio.h>
main()
{
	char str[100];
	int i,j;
	printf("enter the string");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		{
			for(j=i+1;str[j]!='\0';j++)
			{
				str[j]=str[j+1];
			}
		}
	}
	puts(str);
}
