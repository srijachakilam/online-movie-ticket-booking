#include<stdio.h>
main()
{
	int m,x,rev;
	rev=0;int n;
	printf("enter n");
	scanf("%d",&n);
	m=n;
	while(n>0)
	{
		x=n%10;
		rev=(rev*10)+x;
		n=n/10;
		
	}
	if(m==rev)
	{
		printf("palindrome");
	}
	else
	{
		printf("not a palindrome");
	}
}
