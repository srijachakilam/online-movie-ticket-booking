 #include<stdio.h>
main()
{
	int a;
	int a1;
	int a2;
	int a3;
	int a4; 
	int a5;
	int a6;
	int a7;
	 printf("enter a");
	 scanf("%d",&a);
	 
	a1=a/100;
	printf("no of 100 notes=%d\n",a1);
	
	a2=(a-a1*100)/50;
	printf("no of 50 notes=%d\n",a2);
	
	a3=(a-(a1*100+a2*50))/20;
	printf("no of 20 notes=%d\n",a3);
	
	a4=(a-(a1*100+a2*50+a3*20))/10;
	printf("no of 10 notes=%d\n",a4);
	
	a5=(a-(a1*100+a2*50+a3*20+a4*10))/5;
	printf("no of 5 notes=%d\n",a5);
	
	a6=(a-(a1*100+a2*50+a3*20+a4*10+a5*5))/2;
	printf("no of 2 notes=%d\n",a6);
	
	a7=(a-(a1*100+a2*50+a3*20+a4*10+a5*5+a6*2))/1;
	printf("no of 1 notes=%d\n",a7);
	}
