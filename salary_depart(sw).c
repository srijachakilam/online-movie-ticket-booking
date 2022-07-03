#include<stdio.h>
main()
{
	printf("\n C:computer science engineering");
	printf("\n E:electronic and communication engineering");
	printf("\n M:mechanical engineering");
	printf("\n I:civil engineering");
	printf("\n H:chemical engineering");
	char D;
	int n,s;
	printf("\n enter department");
	scanf("%c",&D);
    switch(D)
    {	case 'C':
		printf("enter no of employees of cse\nenter salary of cse");
    	scanf("%d%d",&n,&s);
		printf("total salary=%d",n*s);
    	         break;
		case 'E':
		printf("enter no of employees of ece\nenter salary of ece");
    	scanf("%d%d",&n,&s);
		printf("total salary=%d",n*s);
    	         break;  
		case 'M':
		printf("enter no of employees of mech\nenter salary of mech");
    	scanf("%d%d",&n,&s);
		printf("total salary=%d",n*s);
    	         break;	
		case 'I':
		printf("enter no of employees of civ\nenter salary of civ");
    	scanf("%d%d",&n,&s);
		printf("total salary=%d",n*s);
    	         break;	
		case 'H':
		printf("enter no of employees of chem\nenter salary of chem");
    	scanf("%d%d",&n,&s);
		printf("total salary=%d",n*s);
    	         break;		 	 	        
	}
}
