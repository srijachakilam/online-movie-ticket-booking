#include<stdio.h>
main()
{
	int i=1,n,count=1,j=1;
	printf("enter n");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d %d %d",j,j*j,j*j*j);
		printf("\n");
		j++;
		
		i++;
	}
}
