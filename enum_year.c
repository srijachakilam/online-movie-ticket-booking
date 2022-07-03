#include<stdio.h>
enum year
{
jan,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec
};
main()
{
 int i;
 for(i=jan;i<=dec;i++)
 {
 	printf("%d",i);
 }
}
