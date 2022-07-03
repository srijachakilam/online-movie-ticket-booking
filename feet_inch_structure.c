#include<stdio.h>
struct distance
{
	int feet;
	int inch;
};
main()
{
	struct distance d1,d2,s1;
	printf("\n enter the distance1");
	scanf("%d %d",&d1.feet,&d1.inch);
	printf("\n 1st distance you entered is%d %d",d1.feet,d1.inch);
	printf("\nenter the distance2");
	scanf("%d %d",&d2.feet,&d2.inch);
	printf("\n 2nd distance you entered is%d %d",d2.feet,d2.inch);
	s1.feet=d1.feet+d2.feet;
	s1.inch=d1.inch+d2.inch;
	while(s1.inch>12)
	{
		s1.inch=s1.inch-12;
		s1.feet++;
	}
	printf("\n sum=%d %d",s1.feet,s1.inch);
}
