#include<stdio.h>
main()
{
	int i=1,f1,f2;
	int n,sum;
	printf("enter n");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=f1+f2;
		printf("%4d",sum);
		i++;
		f1=f2;
		f2=sum;
		
	}

}
