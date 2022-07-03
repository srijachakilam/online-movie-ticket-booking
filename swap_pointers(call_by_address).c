#include<stdio.h>
void swap(int*,int*);
main()
{
	int x,y;
	printf("enter two numbers");
	scanf("%d %d",&x,&y);
	swap(&x,&y);
	printf("\n after swap function x,y are %d %d",x,y);
}
void swap(int *x,int *y)
{
	int t;
	t=*x;
	*x=*y;
	*y=t;
	printf("\n x,y values in swap function=%d %d",*x,*y);
}
