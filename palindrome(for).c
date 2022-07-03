#include<stdio.h>
main()
{
	int rev,x,m,n;
	printf("enter n");
	scanf("%d",&n);
	m=n;
	for(rev=0;n>0;n=n/10)
	{
		x=n%10;
		rev=(rev*10)+x;
	}
	if(rev==m)
	{
		printf("palindrome");
		
	}
	else
	{
		printf("not a palindrome");
	}
}
