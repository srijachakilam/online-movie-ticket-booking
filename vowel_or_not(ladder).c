#include<stdio.h>
main()
{
	char S;
	printf("enter S");
	scanf("%c",&S);
	if(S=='A'||'E'||'I'||'O'||'U'||'a'||'e'||'i'||'o'||'u')
	{
		printf("vowel");
	}
	else
	{
		printf("consonant");
	}
}
