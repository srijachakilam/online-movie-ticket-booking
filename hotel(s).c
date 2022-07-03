#include<stdio.h>
main()
{
	printf("\n T:tiffin");
	printf("\n L:lunch");
	printf("\n S:snacks");
	printf("\n d:dosa");
	printf("\n i:idli");
	printf("\n u:upma");
	printf("\n V:veg");
	printf("\n N:non-veg");
	printf("\n f:french fries");
	printf("\n p:pizza");
	printf("\n b:burger");
	printf("\n c:coffee");
	printf("\n w:white pasta");
	int Y;
	char Z,A;
	printf("\n enter type of food");
	scanf("%c",&Z);
	
	switch(Z)
	{
		case 'T':printf("enter item");
		            scanf("%c",&A);
		  switch(A)
			    {
			    	
				  case 'd':printf("no of dosa plates");
			             scanf("%d",&Y);
			             printf("amount=%d",Y*25);
			             break;
			             
			     case 'i':printf("no of idli plates");
				          scanf("%d",&Y);
						  printf("amount=%d",Y*20);
						  break;
						  
				 case 'u':printf("no of upma plates");
				          scanf("%d",&Y);
						  printf("amount=%d",Y*30);
						  break;
			    }
		
		case 'L':printf("enter item");
		            scanf("%c",&A);
		            
		   switch(A)
			  {
			  	case 'V':printf("no of veg plates");
			  	         scanf("%d",&Y);
			  	         printf("amount=%d",Y*120);
			  	         break;
			  	         
			  	case 'N':printf("no of non-veg plates");
				         scanf("%d",&Y);
						 printf("amount=%d",Y*180);
						 break;
        
			  }
		case 'S':
		           printf("enter item");
		            scanf("%c",&A);
		   switch(A)
			  {
			  	case 'f':printf("no of fries plates");
			  	         scanf("%d",&Y);
			  	         printf("amount=%d",Y*220);
			  	         break;
			  	case 'b':printf("no of burgers");
				         scanf("%d",&Y);
						 printf("amount=%d",Y*200);
						 break; 
						 
				case 'p':printf("no of pizzas");
				         scanf("%d",&Y);
						 printf("amount=%d",Y*230);
						 break;
						 
				case 'c':printf("no of coffees");
				         scanf("%d",&Y);
						 printf("amount=%d",Y*190);
						 break;
						 
				case 'w':printf("no of plates");
				         scanf("%d",&Y);
						 printf("amount=%d",Y*250);		 		 		         
			  }	  	    
	}
}
