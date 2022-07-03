#include<stdio.h>
main()
{
	int i,n,c;
	printf("enter n");
	scanf("%d",&n);
	for(i=1,c=1;n%i==0;c++,i++)
	{
		
	}
	if(c==2)
	{
		printf("prime");
		
	}
	else
	{
		printf("non-prime");
	}
}
