#include<Stdio.h>
struct details
{
	char name[100];
	long long int account_number;
	char address[100];
	long int amount;
	long long int contact_number;
}s[100];
int n,i,a;
struct details read(int);
struct details del(int);
void display(struct details[],int);
main()
{
	int ch;
    do
	{
	printf("\n1:ENTER DETAILS \n2:DELETE DETAILS \n3:TO DISPLAY DETAILS");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
		printf("enter the no of customers");
	    scanf("%d",&n);
		for(i=0;i<n;i++)
		{
		s[i]=read(n);	
		}
		break;
		
		case 2:s[i]=del(n);
	    display(s,n-1);
	    break;
	    
	    case 3:
	    display(s,n);
	    break;
	}
	printf("press 1 to continue");
	scanf("%d",&a);
    }while(a==1);
}

struct details read(int i)
{
	struct details s[100];
	printf("enter the following details:\n Name \n Account number \n Address \n Amount \n Contact number");
	scanf("%s%lld%s%ld%lld",s[i].name,&s[i].account_number,s[i].address,&s[i].amount,&s[i].contact_number);
	return s[i];
}
void display(struct details s[],int(n))
{
	printf("----DETAILS----");
	for(i=0;i<n;i++)
	{
		printf("%s \n %lld \n %s \n %ld \n %lld \n",s[i].name,s[i].account_number,s[i].address,s[i].amount,s[i].contact_number);
	}
}
struct details del(int n)
{
	int pos;
	printf("enter position");
	scanf("%d",&pos);
	for(i=pos-1;i<n;i++)
	{
		s[i]=s[i+1];
	}
}
