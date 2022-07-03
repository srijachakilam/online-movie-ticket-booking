#include<stdio.h>
struct distance
{
	int feet;
	int inch;
};
main()
{
	struct distance d1,d2,sum;
	printf("\n enter the 1st distance");
	scanf("%d %d",&d1.feet,&d1.inch);
	printf("1st distance is %d %d",d1.feet,d1.inch);
	printf("\n enter the 2nd distance");
	scanf("%d %d",&d2.feet,&d2.inch);
	printf("2nd distance is %d %d",d2.feet,d2.inch);
	sum.feet=d1.feet+d2.feet;
	sum.inch=d1.inch+d2.inch;
	sum.feet=sum.feet+(sum.inch/12);
	sum.inch=sum.inch%12;
	printf("\n sum=%d %d",sum.feet,sum.inch);
}
