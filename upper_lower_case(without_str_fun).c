#include<stdio.h>
main()
{
	char str[100];
	int i;
	printf("enter the string");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='A'&&str[i]<='Z')
		{
			str[i]=str[i]+32;
			printf("%c",str[i]);
		}
		else if(str[i]>='a'&&str[i]<='z')
		{
			str[i]=str[i]-32;
			printf("%c",str[i]);
		}
	}
}
