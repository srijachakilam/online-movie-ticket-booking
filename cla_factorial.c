#include<stdio.h>
main(int argc,char*argv[])
{
	int n,i,f=1;
	n=atoi(argv[1]);
	for(i=1;i<=n;i++)
		f=f*i;
    printf("%d",f);
}
