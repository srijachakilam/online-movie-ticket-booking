#include<stdio.h>
main()
{
	int rev,x,n;
	printf("enter n");
	scanf("%d",&n);
	for(rev=0;n>0;n=n/10)
	{
		x=n%10;
		rev=(rev*10)+x;
	}
	printf("reverse=%d",rev);
}
