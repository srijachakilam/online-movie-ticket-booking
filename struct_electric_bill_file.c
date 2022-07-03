#include<stdio.h>
struct electricity
{
	char first_name[10];
	char last_name[10];
	float previous_units;
	float current_units;
	float total;
}ele[20];
int n,i;
main()
{
	FILE *fp;
	printf("enter the size");
	scanf("%d",&n);
	printf("enter the details");
	fp=fopen("struct_electric_bill_file","w");
	for(i=0;i<n;i++)
	{
	fscanf(stdin,"%s%s%f%f",ele[i].first_name,ele[i].last_name,&ele[i].previous_units,&ele[i].current_units);	
		fprintf(fp,"%s\t%s\t%f\t%f",ele[i].first_name,ele[i].last_name,ele[i].previous_units,ele[i].current_units); 
		printf("\n");
		ele[i].total=ele[i].current_units-ele[i].previous_units;
		if(ele[i].total>=0&&ele[i].total<=100)
		{
			ele[i].total=(0.8*ele[i].total)+100;
		}
		else if(ele[i].total>=101&&ele[i].total<=200)
		{
			ele[i].total=(0.9*ele[i].total)+100;	
		}
		else if(ele[i].total>=201&&ele[i].total<=300)
		{
			ele[i].total=(1*ele[i].total)+100;	
		}
		else
		{
			ele[i].total=(2*ele[i].total)+100;
		}
	}
	fclose(fp);
	fp=fopen("struct_electric_bill_file","r");
		for(i=0;i<n;i++)
		{
			fscanf(fp,"%s%s%f%f",ele[i].first_name,ele[i].last_name,&ele[i].previous_units,&ele[i].current_units);
			fprintf(stdout,"%s\t%s\t%f\t%f\t%f",ele[i].first_name,ele[i].last_name,ele[i].previous_units,ele[i].current_units,ele[i].total);
			printf("\n");
		
		}
	fclose(fp);	
	}

