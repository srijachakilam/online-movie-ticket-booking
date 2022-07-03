#include<stdio.h>
main()
{

	float units,charge,total_charge,final_charge;
	printf("enter no of units");
	scanf("%f",&units);
	
	if(units<=200)
	{
		charge=(0.8*units);
		printf("total_charge=%f",(charge+100));
	    
	}
	else if(units>200&&units<=300)
	{
		charge=(0.9*units);
		printf("total_charge=%f",(charge+100));
		
	}
	else 
	{
		charge=(1*units);
		
		 if(charge>400)
	     {
	     	printf("final_charge=%f",(charge+(0.15*charge))); 
		 }
	}
	
	
	 
}
