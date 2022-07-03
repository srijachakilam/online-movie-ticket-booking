#include<stdio.h>
main()
{
	int n,count,i,j;
	count=1;i=1;j=1;
	printf("enter n");
	scanf("%d",&n);
	while(i<=n)
	{
	     
		while(j<=3)
		{
		
			printf("%4d",count);
			count=(count*count);
			count++;
		    	j++;
		}
			
	   printf("\n");
	  i++;	
	}
     
}
