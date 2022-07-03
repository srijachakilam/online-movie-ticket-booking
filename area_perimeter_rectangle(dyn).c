#include<stdio.h>
main()
{
	int L;
	int B;
	int area;
	int perimeter;
	printf("enter L");
	scanf("%d",&L);
	printf("enter B");
	scanf("%d",&B);
	area=L*B;
	perimeter=2*(L+B);
	printf("area=%d",area);
	printf("perimeter=%d",perimeter);
	
}
