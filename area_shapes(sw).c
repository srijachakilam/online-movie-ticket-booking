#include<stdio.h>
main()
{
	printf("\n S:square");
	printf("\n R:rectangle");
	printf("\n C:circle");
	printf("\n T:triangle");
	float a,b;
	char z;
	printf("\n enter shape");
	scanf("%c",&z);

	switch(z)
	{
		case 'S':
			printf("enter side of square");
			scanf("%f",&a);
			printf("area=%f",(a*a));
			break;
			
		case 'R':
		    printf("enter sides of rectangle");
		    scanf("%f%f",&a,&b);
		    printf("area=%f",(a*b));
		    break;
			
		case 'C':
		    printf("enter radius");
		    scanf("%f",&a);
		    printf("area=%f",(3.14*a*a));
		    break;
			
		case 'T':
			printf("enter base and height of triangle");
			scanf("%f%f",&a,&b);
			printf("area=%f",(a*b)/2);
			break;		
	}
}
