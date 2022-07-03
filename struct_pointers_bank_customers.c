#include<stdio.h>
struct bank
{
	char name[10];
	long long int account_number;
	long int amount; 
};
main()
{
	struct bank *p,e;
	p=&e;
	printf("enter details");
	scanf("%s%ld%ld",p->name,&p->account_number,&p->amount);
	printf("---DETAILS---");
	printf("\n %s \n %ld \n %ld",p->name,p->account_number,p->amount);
}
