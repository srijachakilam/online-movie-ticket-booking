#include<stdio.h>
int reverse(int a);
main()
{
	int a,c,m;
	printf("enter the number");
	scanf("%d",&a);
	m=a;
	c=reverse(a);
    printf("%d",c);
    
    if(m==c)
	{
		printf("\n palindrome");
	}
	else
	{
		printf("\n not a palindrome");
	}
		
}
int reverse(int a)
{
	int rev,x;
	for(rev=0;a>0;a=a/10)
	{
		x=a%10;
		rev=(rev*10)+x;
	}
	
	return rev;
}

