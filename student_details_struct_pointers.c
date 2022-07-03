#include<stdio.h>
struct student_details
{
	char name[10];
	int age;
	int roll_no;
};
main()
{
	 struct student_details *p,s;
	 p=&s;
	 printf("enter the details");
	 scanf("%s%d%d",p->name,&p->age,&p->roll_no);
	 printf("---DETAILS---");
	 printf("%s\n %d\n %d",p->name,p->age,p->roll_no);
}
