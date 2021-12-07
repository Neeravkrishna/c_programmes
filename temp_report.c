#include<stdio.h>
main()
{
	int a;
	scanf("%d",&a);
	if(a<0)
	{
		printf("Freezing weather");
	}
	if(a<10 && a>=0)
	{
		printf("Very cold weather");
	}
	if(a<20 && a>=10)
	{
		printf("Cold weather");
	}
    if(a<30 && a>=20)
	{
		printf("Normal in Temp");
	}
	if(a<40 && a>=30)
	{
		printf("Its Hot");
	}
	if(a>40)
	{
		printf("Its very Hot");
	}
}
