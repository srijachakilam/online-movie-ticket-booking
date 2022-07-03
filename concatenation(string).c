#include<string.h>
main()
{
	char a[100],b[100];
	int n;
	printf("enter the first string");
	gets(a);
	printf("enter the second string");
	gets(b);
	n=strcat(b,a);
	printf("%s",n);
	
}
