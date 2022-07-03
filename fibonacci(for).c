#include<stdio.h>
main()
{
	int f1,f2,n,i,sum;
	printf("enter n");
	scanf("%d",&n);
	for(f1=0,f2=1,i=1;i<=n;i++)
	{
		sum=f1+f2;
		printf("%4d",sum);
		f1=f2;
		f2=sum;
	}
}
