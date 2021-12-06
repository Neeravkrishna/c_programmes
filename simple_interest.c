#include<stdio.h>
main()
{
	float a,p,t,r;
	printf("enter a value for priciple:");
	scanf("%f",&p);
	printf("enter a value for time:");
	scanf("%f",&t);
	printf("enter a value for rate:");
	scanf("%f",&r);
	a=(p*t*r)/100;
	printf("%f",a);
}
