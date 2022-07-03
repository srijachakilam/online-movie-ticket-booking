#include<stdio.h>
main()
{
	FILE *f1;
	char d[100];
	f1=fopen("fseek_example","w");
	fputs("WELCOME TO PSP PROGRAMMING FOR CSE AND ECE",f1);
	fclose(f1);
	f1=fopen("fseek_example","r");
	fgets(d,60,f1);
	printf("\n before seeking %s",d);
	fseek(f1,21,SEEK_SET);
	fgets(d,60,f1);
	printf("\n after seeking %s",d);
	fseek(f1,-10,SEEK_CUR);
	fgets(d,6,f1);
	printf("\n %s",d);
	fseek(f1,20,0);
	fgets(d,40,f1);
	printf("\n %s",d);
	fclose(f1);
	
}
