#include<stdio.h>
main()
{
	int a,b,c,D;
printf("enter a");
scanf("%d",&a);
printf("enter  b");
scanf("%d",&b);
printf("enter c");
scanf("%d",&c);
    D=a>b?a:(b>c)?b:c;
	printf("the result=%d",D);
}
