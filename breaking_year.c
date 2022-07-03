#include<stdio.h>
main()
{
	int Y;
	int Y1;
	int Y2;
	int Y3;
	 
	 printf("enter Y");
	 scanf("%d",&Y);
	 
	Y1=Y/365;
	printf("no of years=%d\n",Y1);
	
	Y2=(Y-Y1*365)/7;
	printf("no of weeks=%d\n",Y2);
	
	Y3=(Y-(Y1*365+Y2*7))/1;
	printf("no of days=%d\n",Y3);
}
