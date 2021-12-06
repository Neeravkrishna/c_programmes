#include<stdio.h>
main()
{
	float a,b,c,d,e;
	float p,g;
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	scanf("%f",&d);
	scanf("%f",&e);
	g=(a+b+c+d+e)/500;
	p=g*100;
	if (p>90)
	{
		printf("A");
	}
	else if(p>80)
	{
		printf("B");
	}
	else if(p>70)
	{
		printf("C");
	}
	else if(p>40)
	{
		printf("D");
	}
	else if(p<40)
	{
		printf("E");
	}
}
