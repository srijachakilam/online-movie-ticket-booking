#include<stdio.h>
#define TRUE 1
#define FALSE 0
main()
{
	printf("TRUE=%d\n",TRUE);
	printf("FALSE=%d\n",FALSE);
	#undef TRUE
	#undef FALSE
	#define TRUE 0
	#define FALSE 1
	printf("\n macro values are redefined\n");
	printf("TRUE=%d\n",TRUE);
	printf("FALSE=%d\n",FALSE);
}
