#include<stdio.h>
main()
{
	int m1;
	int m2;
	int m3;
	int m4;
	int A;
    float D;
	printf("enter m1,m2,m3,m4");
	scanf("%d%d%d%d",&m1,&m2,&m3,&m4);


	A=(m1+m2+m3+m4);
	D=(A*100)/400;
	if(D>=90)
	{
		printf("student got A grade");
	}
   else if(D>=80&&D<90)
	{
		printf("student got B grade");
	}
    else if(D>=70&&D<80)
	{
		printf("student got C grade");
		
	}
    else if(D>=60&&D<70)
	{
		printf("student got D grade");
		
	}
	else
	{
		printf("student got E grade");
	}
}
	

