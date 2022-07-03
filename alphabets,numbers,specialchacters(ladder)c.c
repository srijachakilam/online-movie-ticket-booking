#include<Stdio.h>
main()
{
	char A;
	printf("enter A");
	scanf("%c",&A);
	if((A>='a'&&A<='z')||(A>='A'&&A<='Z'))
	{
		printf("alphabets");
		
	}
	else if(A>='0'&&A<='9')
	{
		printf("digits");
	}
	else
	{
		printf("special characters");
	}
}
