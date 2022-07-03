#include<stdio.h>
struct student
{
	char name[10];
	int age;
	float marks;
};
main()
{
	struct student s1={"ram",15,490};
	printf("\n student details are");
	printf("\n %s \t %d \t %f",s1.name,s1.age,s1.marks);
}
