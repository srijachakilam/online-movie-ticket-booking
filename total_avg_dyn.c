#include<stdio.h>
main()
{
	int M1,M2,M3,M4,M5;
	int total;
	float average;
	
    printf("enter M1");
    scanf("%d",&M1);
	printf("enter M2");
	scanf("%d",&M2);
	printf("enter M3");
	scanf("%d",&M3);
	printf("enter M4");
	scanf("%d",&M4);
	printf("enter M5");
	scanf("%d",&M5);
	total=(M1+M2+M3+M4+M5);
	average=(total)/5;
	printf("total=%d",total);
	printf("\naverage=%f",average);
	}
