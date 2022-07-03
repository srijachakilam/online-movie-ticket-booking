#include<stdio.h>
main()
{
	FILE *a1,*a2;
	int n;
	printf("enter numbers");
	a1=fopen("copy_integers1.txt","w");
	while(1)
	{
		scanf("%d",&n);
		if(n==0)
		{
			break;
		}
		putw(n,a1);
	}
	fclose(a1);
	a1=fopen("copy_integers1.txt","r");  
	a2=fopen("copy_integers2.txt","w");
	while((n=getw(a1))!=EOF)
	{
     	putw(n,a2);
	}
	fclose(a1);
	fclose(a2);
}
