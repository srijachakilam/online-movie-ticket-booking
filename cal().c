#include<stdio.h>
#include<math.h>
main()
{
	printf("\n +:add");
	printf("\n -: sub");
	printf("\n *:multi");
	printf("\n /:div");
	printf("\n %:modulus");
	printf("\n ^:power");
	printf("\n $:square root");
	char A;
	printf("\n enter operator");
	scanf("%c",&A);
	 int a,b,p,s,c;
	 printf("enter numbers");
	 scanf("%d%d",&a,&b);
	 
	 switch(A)
	 {	case '+':printf("%d",a+b);
	 	         break;
	 	case '-':printf("%d",a-b);
		        break;
		case '*':printf("%d",a*b);
		         break;
		case '/':printf("%d",a/b);
		         break;
		case '%':printf("%d",a%b);
		         break;
		case '^':p=pow(a,b); 
		         printf("%d",p);
				 break;
		case '$':c=a+b-b;
		         s=sqrt(c);
		         printf("%d",s);
		         break;		 		 		 		         
	 }	
}
