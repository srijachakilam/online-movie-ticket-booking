#include<stdio.h>
enum state
{
	working=1,failed=0,frezzed=0
};
main()
{
	printf("%d %d %d",working,failed,frezzed);
}
