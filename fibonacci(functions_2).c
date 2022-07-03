#include<stdio.h>
void fi(int);
main()
{
	int n,c;
	printf("enter the number");
	scanf("%d",&n);
	fi(n);
}
void fi(int n)
{
	int i,f1=0,f2=1,sum;
	for(i=0;i<n;i++)
	{
		sum=f1+f2;
		printf("%5d",sum);
		f1=f2;
		f2=sum;
	}
	
}
