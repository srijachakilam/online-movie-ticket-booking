#include<stdio.h>
main()
{
	FILE *a1;
	char name[20];
	char branch[20];
	int age,i,n;
	printf("enter the no of students");
	scanf("%d",&n);
	printf("enter student details");
	a1=fopen("student_details","w");
	for(i=0;i<n;i++)
	{
	fscanf(stdin,"%s %s %d",name,branch,&age);
	fprintf(a1,"%s\n%s\n%d",name,branch,age);
    }
	fclose(a1);
	a1=fopen("student_details","r");
	for(i=0;i<n;i++)
	{
	fscanf(a1,"%s %s %d",name,branch,&age);
	fprintf(stdout,"%s\n%s\n%d",name,branch,age);
	printf("\n");
	printf("------");
	printf("\n");
	
    }
	fclose(a1);
}
