#include<stdio.h>
main()
{
	int*p,n,i,sum=0;
	printf("enter n");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	printf("enter elements");
	for(i=0;i<n;i++)
	scanf("%d",p+i);
	for(i=0;i<n;i++)
	{
		sum=sum+*(p+i);
	}
	printf("sum=%d",sum);
}
