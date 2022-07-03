#include<stdio.h>
main()
{
	 int a,b;
	 char ch,ch1;
	 do
	 {
	 	printf("\n +:add");
	 	printf("\n -:sub");
	 	printf("\n *:multi");
	 	printf("\n /:div");
	 	printf("\n enter operator");
	 	scanf("%c",&ch);
		printf("enter a and b");
	 	scanf("%d %d",&a,&b);
	 	
	 	switch(ch)
	 	{
	 		case '+':printf("%d",a+b);
	 		         break;
	 		case '-':printf("%d",a-b);
			         break;
			case '*':printf("%d",a*b);
			         break;
			case '/':printf("%d",a/b);
			         break;	
			default:printf("invalid");		 	 		         
		 }
		 printf("\n press z to continue");
		 scanf(" %c",&ch1);
	 	
	 }while(ch1=='z');
}
