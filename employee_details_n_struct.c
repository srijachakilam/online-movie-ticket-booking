#include<stdio.h>
struct employee
{
	char name[100];
	int age;
	char gender[10];
	char department[100];
	float salary;
	
};
main()
{
	int i,n;
	struct employee s[100];
	printf("enter the size");
	scanf("%d",&n);
	printf("\n enter employee details");
	for(i=0;i<n;i++)
	{
		scanf("%s %d %s %s %s",&s[i].name,&s[i].age,&s[i].gender,&s[i].department,s[i].salary);
	}
	for(i=0;i<n;i++)
	{
	printf("\n %s \t %d \t %f \t %s ",s[i].name,s[i].age,s[i].gender,s[i].department,s[i].salary);
    }
} 
