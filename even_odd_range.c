#include<stdio.h>
main()
{
	int esum=0,osum=0,n,i;
	printf("enter n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
		
		esum=esum+i;
		printf("esum=%d",esum);
    	}
	   else
	  {
		osum=osum+i;
		printf("osum=%d",osum);
	  }
	
   }
}
