//sum of x+x^2/2+x^3/3+.....x^n/n series.
#include<stdio.h>
main()
{
	int n,x,i;
	float sum;
	printf("enter n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+(pow(i,i)/i);
	}
	printf("result=%f",sum);
	
}
