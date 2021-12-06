#include<stdio.h>
main()
{
	int hw,wh,amount_wh,amount_hw;
	printf("Enter the hours:");
	scanf("%d",&hw);
	printf("Enter the weekly hours :");
	scanf("%d",&wh);
	if (wh > 40)
	{
	    amount_wh=wh*2000+(wh/2)*2000;
		printf("%d is the amount for weekly hours waged person.",amount_wh);
	}
	else
	{
	    amount_wh=wh*1000;
		printf("%d is the amount for weekly hours waged person.",amount_wh);
	}
	amount_hw=hw*500;
		printf("\n%d is the amount for hourly waged person.",amount_hw);
}
