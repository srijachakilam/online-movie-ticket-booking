#include<Stdio.h>
main()
{
	FILE *a1,*a2;
	char c;
    printf("enter the data");
    a1=fopen("details1.txt","w");
    while((c=getchar())!=EOF)
    putc(c,a1);
    fclose(a1);
    a1=fopen("details1.txt","r");
	a2=fopen("details2.txt","w");
    while((c=getc(a1))!=EOF)
    putc(c,a2);
    fclose(a2);
    fclose(a1);
    
}
