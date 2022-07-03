#include<stdio.h>
int display(int,int[]);
main()
{
	int a[10],i,n,z;
	printf("enter size");
	scanf("%d",&n);
	printf("enter the  values");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
}
    z=display(n,a);
    printf("the sum=%d",z);
    

}
int display(int n,int a[])
{
	int i,sum=0;
	for(i=0;i<n;i++)
	{
	sum=sum+a[i];

	}
		return sum;
}

