#include<stdio.h>
main()
{
	int sum=0,x,n,m,*p,*p1;
	p=&n;
	p1=&m;
	printf("enter the number");
	scanf("%d",p);
	*p1=*p;
	for(sum=0;*p>0;*p=*p/10)
	{
		x=*p%10;
		sum=sum+(x*x*x);
	}
     if(*p1==sum)
     {
     	printf("armstrong");
	 }
	 else
	 {
	 	printf("not an armstrong");
	 }
}
