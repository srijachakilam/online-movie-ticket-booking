#include<stdio.h>
int tiffins(int,int);
int snacks(int,int);
int meals(int,int);
main()
{
	int tf,ti,np,r,z;
	printf("1.tiffins\n2.snacks\n3.meals\n\n");
	printf("1.idli\n2.dosa\n3.puri\n\n");
	printf("1.pizza\n2.burger\n\n");
	printf("1.veg\n2.nonveg\n\n");
	printf("type of item:");
	scanf("%d",&ti);
	printf("type of food");
	scanf("%d",&tf);
	printf("no of plates");
	scanf("%d",&np);
	switch(ti)
	{
		case 1:
			z=tiffins(tf,np);
			printf("rate=%d",z);
			break;
		case 2:
			z=snacks(tf,np);
			printf("rate=%d",z);
			break;
		case 3:
			z=meals(tf,np);
			printf("rate=%d",z);
			break;			
			
	}
}
int tiffins(int tf,int np)
{
	int r;
	switch(tf)
	{
		case 1:
			r=np*10;
			break;
			
		case 2:
			r=np*15;
			break;
			
		case 3:
			r=np*20;
			break;				
			
	}
	return r;
}
int snacks(int tf,int np)
{
	int r;
	switch(tf)
	{
		case 1:r=np*100;
		break;
		case 2:r=np*250;
		break;
	}
	return r;
}
int meals(int tf,int np)
{
	int r;
	switch(tf)
	{
		case 1:
			r=np*50;
			break;
			
		case 2:
		    r=np*100;
			break;	
	}
	return r;
}
