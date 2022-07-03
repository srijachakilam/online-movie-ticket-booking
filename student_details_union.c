#include<stdio.h>
union student_details
{
	char name[10];
	int age;
	long int roll_no;
}b;
main()
{
printf("\nenter name");
scanf("%s",b.name);
printf("\n%s",b.name);
printf("\nenter age");
scanf("%d",&b.age);
printf("\n%d",b.age);
printf("\nenter roll no");
scanf("%d",&b.roll_no);
printf("\n%d",b.roll_no);	
}
