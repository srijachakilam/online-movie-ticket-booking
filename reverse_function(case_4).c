 #include<stdio.h>
int reverse(int a);
main()
{
	int a,c;
	printf("enter the number");
	scanf("%d",&a);
	c=reverse(a);
    printf("%d",c);
		
}
int reverse(int a)
{
	int rev=0,x;
	for(;a>0;a=a/10)
	{
		x=a%10;
		rev=(rev*10)+x;
		}
	return rev;
}

