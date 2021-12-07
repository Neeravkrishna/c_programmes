#include<stdio.h>
main()
{
	float bs,gross;
	float hra,da;
	scanf("%f",&bs);
	if (bs<=10000)
	{
		hra=0.2*bs;
		da=0.8*bs;
		gross=bs+hra+da;
	}
	else if(bs<=20000)
	{
		hra=0.25*bs;
		da=0.9*bs;
		gross=bs+hra+da;
	}
    else if(bs>20000)
	{
		hra=0.3*bs;
		da=0.95*bs;
		gross=bs+hra+da;
	}
	printf("%f",gross);
}
