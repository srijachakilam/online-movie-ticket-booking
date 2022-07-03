#include<Stdio.h>
main()
{
	int i,count;
	count=1;
	i=1;
	int n;
	printf("enter n");
	scanf("%d",&n);
	while(n%i==0)
	{
	    	count++;
        	i++;
	}
	if(count==2)
	{
		printf("prime");
	}
	else
	{
		printf("not a prime");
	}
}
