#include<stdio.h>
main()
{
	int i,x,n,sum=0;
	printf("enter n");
	scanf("%d",&n);
	for(sum=0;n>0;n=n/10)
	{
		x=n%10;
		sum=sum+x;
		
	}
	printf("result=%d",sum);
}
