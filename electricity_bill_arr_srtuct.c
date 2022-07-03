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
	int i,n;
	struct bill b[100];
	printf("enter size");
	scanf("%d",&n);
	printf("\n enter the details");
	for(i=0;i<n;i++)
	{
	scanf("%s \t %s \t %f \t %f",&b[i].first_name,&b[i].last_name,&b[i].previous_units,&b[i].current_units);
    }
    for(i=0;i<n;i++)
    {
	b[i].total=b[i].current_units-b[i].previous_units;
    }
    for(i=0;i<n;i++)
    {
	if(b[i].total>=0&&b[i].total<=100)
	{
	b[i].total=(0.8*b[i].total)+100;
	}
	else if(b[i].total>100&&b[i].total<=200)
	{
		b[i].total=(0.9*b[i].total)+100;
	}
	else if(b[i].total>=200&&b[i].total<=300)
	{
		b[i].total=(1*b[i].total)+100;
	}
	else if(b[i].total>=300)
	{
		b[i].total=(2*b[i].total)+100;
	}
    }
    for(i=0;i<n;i++)
	{
    printf("\n %s \t\t %s \t\t %f \t\t %f \t\t %f",b[i].first_name,b[i].last_name,b[i].previous_units,b[i].current_units,b[i].total);
    }
}
