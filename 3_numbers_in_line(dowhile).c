#include<stdio.h>
main()
{
	int c=1,n,i=1,j=1;
	printf("enter n");
	scanf("%d",&n);
	do
	{
		printf("%d %d %d",c,c++,c++);
		printf("\n");
		j++;
		i++;
	}while(i<=n);
	
}
