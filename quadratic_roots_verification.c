#include<stdio.h>
main()
{
	int a,b,c;
	float d;
	printf("Enter the x^2 cofficient:");
	scanf("%d",&a);
	printf("Enter the x cofficient:");
	scanf("%d",&b);
	printf("Enter the constant:");
	scanf("%d",&c);
	d=(b*b)-4*(a*c);
	if(d>0)
	{
		printf("The roots are real.");
	}
	if(d<0)
	{
		printf("The roots are not real.");
	}
	if(d==0)
	{
		printf("The roots are real and equal.");
	}
}
