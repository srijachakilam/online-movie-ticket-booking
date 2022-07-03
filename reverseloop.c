#include<stdio.h>
main()
{
	int rev=0;
	int n,x;
	printf("enter n");
	scanf("%d",&n);
	while(n>0)
	{
		x=n%10;
		rev=(rev*10)+x;
		n=n/10;
	}
	printf("reverse=%d",rev);
}
