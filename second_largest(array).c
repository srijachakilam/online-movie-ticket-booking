#include<stdio.h>
main()
{
	int a[10],i,large=0,z,n,large1;
	printf("enter n");
	scanf("%d",&n);
	printf("enter elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>large)
		{
			large=a[i];
		}
	}
	z=large;
	for(i=0;i<n;i++)
	{
			z=large;
		continue;
		large1=large;
	}
	printf("%d",large1);
}
