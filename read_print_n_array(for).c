#include<stdio.h>
main()
{
	int a[10];
	int i,n;
	printf("enter n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
