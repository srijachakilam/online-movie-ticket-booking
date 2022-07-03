#include<stdio.h>
main()
{
	FILE *f1;
	char c;
	f1=fopen("biodata.txt","w");
	printf("enter the data");
	while((c=getchar())!=EOF)
	putc(c,f1);
	fclose(f1);
}
