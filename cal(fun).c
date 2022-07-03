#include<stdio.h>
float sum(int,int);
float sub(int,int);
float mul(int,int);
float div(float,float);
main()
{
   int ch,a,b,ch1;
   float z;
   do
   {  
    printf("enter the operator\n 1:sum\n 2:sub \n 3:mul \n 4:div");
    scanf("%d",&ch);
    printf("enter the values");
    scanf("%d %d",&a,&b);
	
    switch(ch)
    {
	
    case 1:z=sum(a,b);
    printf("sum=%f",z);
    break;

    case 2:z=sub(a,b);
    printf("sub=%f",z);
    break;

    case 3:z=mul(a,b);
    printf("mul=%f",z);
    break;

    case 4:z=div(a,b);
    printf("div=%f",z);
    break;
   }
   printf("press 1 to continue");
scanf(" %d",&ch1);
}while(ch1==1);

}
float sum(int a,int b)
{
	int addition=a+b;
	return addition;
}
float sub(int a,int b)
{
	int subtraction=a-b;
	return subtraction;
}
float mul(int a,int b)
{
	int multiply=a*b;
	return multiply;
}
float div(float a,float b)
{
	float division=(float)(a)/(float)(b);
	return division;
}

