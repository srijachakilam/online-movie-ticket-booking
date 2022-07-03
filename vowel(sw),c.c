#include<stdio.h>
main()
{
	char ch;
	printf("enter character");
	scanf("%c",&ch);
	switch(ch)
	{
		case 'a':
		case 'e':
		case 'i':
	    case 'o':
		case 'u':printf("vowel");
		break;
		default:printf("consonant");	
	}
}
