#include<stdio.h>
main()
{
	int a[100],i,n,m,flag=0;
	printf("enter n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter m");
	scanf("%d",&m);
	for(i=0;i<n;i++)
	{
		if(m==a[i])
		{
			flag=1;
			break;
		}
    }
		if(flag==1)
		{
			printf("found");
			
		}
		else
		{
			printf("not found");
		}
	
}
