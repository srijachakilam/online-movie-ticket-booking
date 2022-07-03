#include<stdio.h>
main(int argc,char*argv[])
{
	int a,b,c;
	a=atoi(argv[1]);
	b=atoi(argv[2]);
	c=atoi(argv[3]);
	if(a>b&&a>c)
		printf("%d is greatest",a);
	else if(b>a&&b>c)
		printf("%d is greatest",b);
	else
		printf("%d is greatest",c);	
}
