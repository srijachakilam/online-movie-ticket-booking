#include<stdio.h>
main()
{
	char ch,ch1;
	do

	{
		printf("enter ch");
		scanf("%c",&ch);
		   switch(ch)
		    {
		     case 'o':printf("orange");
		         break;
		    case 'y':printf("yellow");
		         break;
		    case 'r':printf("red");
		         break;
		    case 'b':printf("black");
		         break;		 
				 		 		 	
		    }
		printf("\n press 1 to continue");
		scanf(" %d",&ch1);
	}while(ch1==1);
}
