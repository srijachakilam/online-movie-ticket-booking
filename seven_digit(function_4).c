 #include<stdio.h>
int sum(int);
int cube(int);
main()
{
	int n,z,z1;
	printf("enter a seven digit number");
	scanf("%d",&n);
	z=sum(n);
	z1=cube(n);
	if(z==z1)
	printf("valid");
	else
	printf("invalid");
}
int sum(int n)
{
	int sum,m,x;
	m=n;
	while(n>0)
	{
	x=n%10;
	sum=sum+x;
	n=n/10;	
	}
	m=m%1000;
	m=m/100;
	sum=sum-m;
	return sum;
}
int cube(int n)
{
	int m;
	m=n;
	m=m%1000;
	m=m/100;
	m=m*m*m;
	return m;
}
