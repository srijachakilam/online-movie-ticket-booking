#include<stdio.h>
main()
{
	int i,n,c,j;
	printf("enter n");
	scanf("%d",&n);
	for(j=1,i=1;i<=n;j++,i++)
	{
	printf("%d %d %d",j,j*j,j*j*j);
	printf("\n");	
	}
}
