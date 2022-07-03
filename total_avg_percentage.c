#include<stdio.h>
main()
{
	int M1=80;
	int M2=75;
	int M3=90;
	int M4=85;
	int M5=60;
	int total;
	int avg;
	float percentage;
	total=(M1+M2+M3+M4+M5);
	avg=(total)/5;
	percentage=(total*100)/500;
	printf("the total=%d",total);
	printf("\nthe avg=%d",avg);
	printf("\nthe percentage=%f",percentage);	
}
