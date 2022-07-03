#include<stdio.h>
main()
{
	int i=1;
	start:
		printf("\n%d",i);
		i++;
		if(i<=10)
		goto start;
		printf("\n end of program");
}
