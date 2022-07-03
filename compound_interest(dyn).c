#include<math.h>
main()
{
	int p;
	int r;
	int n;
	int t;
	float A;
	float D;
	float B;
	printf("enter p");
	scanf("%d",&p);
	printf("enter r");
	scanf("%d",&r);
	printf("enter n");
	scanf("%d",&n);
	printf("enter t");
	scanf("%d",&t);
	D=1+r/n;
	B=(n*t);
	A=p*(pow(D,B));
    printf("Amount=%f",A);
	}
