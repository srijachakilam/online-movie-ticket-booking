#include<stdio.h>
struct bill
{
	char first_name[10];
	char last_name[10];
	float previous_units;
	float current_units;
	float total;
};
main()
{
	struct bill b;
	printf("\n enter the details");
	scanf("%s \t %s \t %f \t %f",&b.first_name,&b.last_name,&b.previous_units,&b.current_units);
	b.total=b.current_units-b.previous_units;
	if(b.total>=0&&b.total<=100)
	{
	b.total=(0.8*b.total)+100;
	}
	else if(b.total>100&&b.total<=200)
	{
		b.total=(0.9*b.total)+100;
	}
	else if(b.total>=200&&b.total<=300)
	{
		b.total=(1*b.total)+100;
	}
	else if(b.total>=300)
	{
		b.total=(2*b.total)+100;
	}
    printf("%s \t %s \t %f \t %f \t %f",b.first_name,b.last_name,b.previous_units,b.current_units,b.total);
}
