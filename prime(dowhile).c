#include<stdio.h>
main()
{
	int c=1,n,i=0;
	printf("enter n");
	scanf("%d",&n);
    do
    {
    	c++;
    	i++;
	}while(n%i==0);
	if(c==2)
	{
		printf("prime");
	}
	else
	{
		printf("non-prime");
	}
	
}
