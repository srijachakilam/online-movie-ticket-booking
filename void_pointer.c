#include<stdio.h>
main()
{
	int a[5]={1,2,3,4,5},j;
	void*arr;
	arr=a;
	for(j=0;j<5;j++)
	{
		printf("%d",*((int*)arr)+j);
	}
}
