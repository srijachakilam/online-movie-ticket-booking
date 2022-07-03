#include<stdio.h>
main()
{
	 int a,b,c,*p1,*p2,*p3;
	 p1=&a;
	 p2=&b;
	 p3=&c;
	 printf("enter three values");
	 scanf("%d %d %d",p1,p2,p3);
	 if(*p1>*p2&&*p1>*p3)
	 {
	 	printf("greatest number=%d",*p1);
	 }
	 else if(*p2>*p3&&*p2>*p1)
	 {
	 	printf("greatest number=%d",*p2);
	 }
	 else
	 {
	 	printf("greatest number=%d",*p3);
	 }
}
