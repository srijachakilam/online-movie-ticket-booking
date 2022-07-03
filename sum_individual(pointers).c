#include<stdio.h>
main()
{
	int sum=0,x,n,*p;
	p=&n;
	printf("enter the number");
	scanf("%d",p);
	for(sum=0;*p>0;*p=*p/10)
	{
		x=*p%10;
		sum=sum+x;
	}
	printf("sum of individual numbers=%d",sum);
}
