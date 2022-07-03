#include<stdio.h>
main()
{
	float charge,units;
	printf("enter the units of electricity consumed");
	scanf("%f",&units);
	if(units<=200)
	{
		
		charge=(0.8*units);
		printf("%d",charge);
		if(charge<=100)
		{
			printf("charge is 100");
		}
	}
	
	else if(units>=200&&units<=300)
	{
		float difuni=units-200;
		charge=(0.8*200)+(0.9*difuni);
		printf("charge is %f rupee",charge);
	}
	else
	{
		float charge=1*units;
		if(charge>=400)
		{
			float echarge=(0.15*charge)+charge;
			printf("charge is %f",echarge);
		}
	}
	
}
