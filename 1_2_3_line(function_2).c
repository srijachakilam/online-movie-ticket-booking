#include<stdio.h>
void line(int);
main()
{
	int n;
	 printf("enter the number");
	 scanf("%d",&n);
	 line(n);
	 
}
void line(int n)
{
	int i=0,k,c=1;
	while(i<=n)
	{
		while(k<=3)
		{
			printf("%3d",c);
			c++;
			k++;
			
		}
		k=1;
		printf("\n");
		i++;
	}
}
