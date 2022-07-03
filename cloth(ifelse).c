#include<stdio.h>
main()
{
	float amount,cloth;
	printf("enter amount");
	scanf("%f",&amount);
	printf("enter the type of cloth as \n 1 for mill and \n 2 for handloom");
	scanf("%f",&cloth);
	
	if(amount<=100)
	{
		if(cloth==1)
		{
			printf("amount=%f",amount);
		}
		if(cloth==2)
		{
			printf("amount=%f",(amount-(0.05*amount)));
		}
	}
	
	else if(amount>100&&amount<=200)
	{
		if(cloth=1)
		{
			printf("amount=%f",(amount-(0.05*amount)));
		}
		else
		printf("amount=%f",(amount-(0.075*amount)));
	}
	
	else if(amount>200&&amount<=300)
	{
		if(cloth==1)
		{
			printf("amount=%f",(amount-(0.075*amount)));
		}
		else
		{
			printf("amount=%f",(amount-(0.1*amount)));
		}
		
	}
	else
	{
		if(cloth==1)
		{
			printf("amount=%f",(amount-(0.1*amount)));
		}
		else
		{
			printf("amount=%f",(amount-(0.15*amount)));
		}
	}
}
