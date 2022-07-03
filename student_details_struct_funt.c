#include<stdio.h>
struct student
{
	char name[100];
    int age;
    float marks;
};
main()
{
	struct student s={"srija",18,90};
	display(s);
}
void display(struct student s)
{
	printf("student details");
	printf("\n %s \t %d \t %f",s.name,s.age,s.marks);
}
