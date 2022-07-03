#include<stdio.h>
main()
{
	char ch,ch1;
	
	do
	{
		printf("enter character ");
		scanf("%c",&ch);
	switch(ch)
	{	
		case 'a':printf("vowel");
		         break;
		case 'e':printf("vowel");
		         break;
		case 'i':printf("vowel");
		         break;
		case 'o':printf("vowel");
		         break;
		case 'u':printf("vowel");	
			     break;
		default:printf("consonant");	     
	}
	printf("\n press y to continue");
	scanf(" %c",&ch1);
	
	}while(ch1=='y');
}
