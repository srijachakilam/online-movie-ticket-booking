#include<stdio.h>
main()
{
	FILE *fp;
	int n;
	fp=fopen("integers","w");
	printf("enter numbers");
	while(1)
	{
		scanf("%d",&n);
		if(n==0)
		{
			break;
		}
		putw(n,fp);
	}
	fclose(fp);
	fp=fopen("integers","r");
	while((n=getw(fp))!=EOF)
	{
		printf("%d",n);
	}
	fclose(fp);
}
