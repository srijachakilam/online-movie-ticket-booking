#include<stdio.h>
struct student_details
{
	char name[20];
	char branch[20];
	int age;
}s;
FILE *fp,*a1;
int i,n,x,ch,flag=0,flag1=0,z;
char p[100];
void display(struct student_details);
struct student_details append();
struct student_details search1();
struct student_details search2();
main()
{ 
	int a;
	do
	{
	printf("1:display the records\n2:to add a record\n3:search with roll number\n4:search with name and roll number");
	printf("\nenter the choice");
	scanf("%d",&a);
	switch(a)
	{	
		case 1:
		   display(s);
		   break;
		   
		case 2:
		   s=append();
		   break;
		   
		case 3:
		   s=search1();
		   break;
		   
		case 4:
		   s=search2();
		   break;      	
	}printf("\n press y to continue");
	scanf("%s",&ch);
   }while(ch=='y');
}
void display(struct student_details s)
{
	fp=fopen("struct_n_student_files","w");
	a1=fopen("struct_student_details","r");
	while(fscanf(a1,"%s%s%d",s.name,s.branch,&s.age)!=EOF)
	{
	fprintf(fp,"\n%s %s %d",s.name,s.branch,s.age);
	fprintf(stdout,"\n%s %s %d",s.name,s.branch,s.age);
    }
	fclose(a1);
	fclose(fp);
}
struct student_details append()
{
	printf("enter the no of records to append");
	scanf("%d",&z);
	printf("enter the detail to append");
    fp=fopen("struct_n_student_files","a");
    for(i=0;i<z;i++)
    {
    fscanf(stdin,"%s %s %d",s.name,s.branch,&s.age);
    fprintf(fp,"\n%s %s %d",s.name,s.branch,s.age);
    }
	fclose(fp);
    return s;
}
struct student_details search1()
{
	printf("enter the age to search");
	scanf("%d",&n);
	fp=fopen("struct_n_student_files","r");
	 while(fscanf(fp,"%s%s%d",s.name,s.branch,&s.age)!=EOF)
	{
	if(n==s.age)
	{
	flag=10;
	break;
    }
	}
    if(flag==10)
    {
    	
    	fprintf(stdout,"%s%s%d",s.name,s.branch,s.age);
		fclose(fp);
		printf("\n record found");
	}
	if(flag!=10)
	{
		printf("\n not found");
	}
    
	return s;
	
}
struct student_details search2()
{
	printf("enter the age to search");
	scanf("%d",&n);    
	printf("\n enter th name to search");
	scanf("%s",p);
	fp=fopen("struct_n_student_files","r");
	while(fscanf(fp,"%s%s%d",s.name,s.branch,&s.age)!=EOF)
	{
	
	x=strcmp(p,s.name);
	if(x==0&&n==s.age)
	{
	flag1=11;
	break;
    }
	}
	if(flag1==11)
	{
		fprintf(stdout,"%s%s%d",s.name,s.branch,s.age);
		fclose(fp);
		printf("\n record found");
	}
	else
	{
		printf("not found");
	}
	return s;
}
