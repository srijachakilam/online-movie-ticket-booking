#include<stdio.h>
main()
{
	int b,i=1,f1=0,f2=1,sum;
	printf("\n %d %d",f1,f2);
	printf("enter b");
	scanf("%d",&b);
	do
	{
		sum=f1+f2;
		printf("%4d",sum);
		i++;
		f1=f2;
		f2=sum;
	}while(i<=b);
	
}
