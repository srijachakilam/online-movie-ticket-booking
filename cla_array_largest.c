#include<stdio.h>
main(int agrc,char*argv[])
{
	int k,a[10],large=0;
	int n=atoi(argv[1]);
	for(k=0;k<n;k++)
	a[k]=atoi(argv[k+2]);
	for(k=0;k<n;k++)
	{
		if(a[k]>large)
		{
			large=a[k];
		}
	}
	printf("%d",large);
}
