#include<stdio.h>
struct student
{
    char name[20];
	char branch[20];
	int age;
};
main()
{
	FILE *a1;
	struct student s;
	int i,n;
	printf("enter the no of students");
	scanf("%d",&n);
	printf("enter student details");
	a1=fopen("struct_student_details","w");
	for(i=0;i<n;i++)
	{
	fscanf(stdin,"%s %s %d",s.name,s.branch,&s.age);
	fprintf(a1,"%s\n%s\n%d",s.name,s.branch,s.age);
    }
	fclose(a1);
	a1=fopen("struct_student_details","r");
	for(i=0;i<n;i++)
	{
	fscanf(a1,"%s %s %d",s.name,s.branch,&s.age);
	fprintf(stdout,"%s\n%s\n%d",s.name,s.branch,s.age);
	printf("\n");
	printf("------");
	printf("\n");
    }
	fclose(a1);
}
