#include<stdio.h>
main()
{
	int i,j,n,k=1;
	printf("enter n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%3d",j);
			k++;
			if(k==1)
			break;
		}
		printf("\n");
	}
}
