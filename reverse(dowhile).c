#include<stdio.h>
main()
{
	int n,x ,rev=0;
	printf("enter n");
	scanf("%d",&n);
	do
	{
		x=n%10;
		rev=(rev*10)+x;
		n=n/10;
	}while(n>0);
	printf("reverse=%d",rev);
}
