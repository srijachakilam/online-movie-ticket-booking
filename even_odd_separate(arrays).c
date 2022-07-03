#include<stdio.h>
main()
{
	int i,n,a[100],j=0,k=0,o[100],e[100],flag=0,flag1=0;
	printf("enter n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			e[j]=a[i];
			j++;
			flag++;
		}
		else
		{
			o[k]=a[i];
		    k++;
		    flag1++;
		}
	}
	printf("even nuumbers");
	for(j=0;j<flag;j++)
	{
		printf("%3d",e[j]);
		printf("\n");
	}
	printf("odd numbers");
	for(k=0;k<flag1;k++)
	{
		printf("%3d",o[k]);
	}
}
