#include<stdio.h>
main()
{
	FILE *a1;
	char name[20]; 
	char branch[20];
	int age;
	a1=fopen("student_details","w");
	fscanf(stdin,"%s %s %d",name,branch,&age);
	fprintf(a1,"%s %s %d",name,branch,age);
	fclose(a1);
	a1=fopen("student_details","r");
	fscanf(a1,"%s %s %d",name,branch,&age);
	fprintf(stdout,"%s %s %d",name,branch,age);
	fclose(a1);
}
