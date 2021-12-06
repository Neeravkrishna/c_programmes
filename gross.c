#include<stdio.h>
main()
{
	int bs,gross;
	float hra,da;
	scanf("%d",&bs);
	if (bs<=10000)
	{
		hra=bs*(20/100);
		da=bs*(20/100);
		gross=bs+hra+da;
		printf("%f",hra);
	}
	else if(bs<=20000)
	{
		hra=bs*(25/100);
		da=bs*(90/100);
		gross=bs+hra+da;
		printf("%d",gross);
	}
	else if(bs>20000)
	{
		hra=bs*(30/100);
		da=bs*(95/100);
		gross=bs+hra+da;
		printf("%d",gross);
	}
}
