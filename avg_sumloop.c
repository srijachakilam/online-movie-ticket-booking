#include<Stdio.h>
main()
{
	int i=0,sum=0;
	int n;
	printf("enter n");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=sum+i;
		i++;
		
	}
	printf("sum=%d",sum);
	printf("avg=%d",sum/n);
}
