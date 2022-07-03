//sum of x+x^2/2+x^3/3+.....x^n/n
#include<stdio.h>
#include<math.h>
main()
{
	
	int x,n,i;
	float sum=0,y;
	printf("enter n");
	scanf("%d",&n);
	printf("enter x");
	scanf("%d",&x);
	for(i=1;i<=n;i++)
	{
		y=(pow(x,i))/i;
		sum=sum+y;
	}
	printf("sum=%f",sum);
}
