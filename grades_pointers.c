#include<stdio.h>
main()
{
	int *A,e,f,m1,m2,m3,m4,*p1,*p2,*p3,*p4;
	float *D;
	p1=&m1;
	p2=&m2;
	p3=&m3;
	p4=&m4;
	A=&e;
	D=&f;
	printf("enter marks of 4 subject");
	scanf("%d %d %d %d",p1,p2,p3,p4);
	*A=(*p1+*p2+*p3+*p4);
	*D=(*A*100)/400;
	if(*D>=91)
	{
		printf("student got A grade");
	}
	else if(*D>=80)
	{
		printf("student got B grade");	
	}
	else if(*D>=70)
	{
		printf("student got C grade");
		
	}
    else if(*D>=60)
	{
		printf("student got D grade");
		
	}
	else if(*D>=50)
	{
		printf("student got E grade");
	}
	else
	{
		printf("fail");
	}
}
