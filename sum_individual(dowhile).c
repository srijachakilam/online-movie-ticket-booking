#include<stdio.h>
main()
{
	int sum=0,n,x;
	printf("enter n");
	scanf("%d",&n);
	do
	{
		x=n%10;
		sum=sum+x;
		n=n/10;
		
	}while(n>0);
	printf("sum=%d",sum);
}
