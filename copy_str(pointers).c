#include<stdio.h>
main()
{
	char a[100],b[100],*p,*q;
	int l=0;
	p=a;
	q=b;
	printf("enter the string");
	gets(a);
	for( ;*p!='\0';p++)   //a[i]=*p
	{
		l++;
	}
	for( ;p<=l;p++)
	{
		*q=*p;    //b[j]=*q
		q++;
	}
    printf("%c",*q);
}
