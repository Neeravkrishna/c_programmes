#include<stdio.h>
main()
{
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if(a>b && b>c)
	{
		printf("c is the minimum of the three numbers.");
	}
	if(a>b && b<c)
	{
		printf("b is the minimum of the three numbers.");
	}
	if(a<b && a<c)
	{
		printf("a is the minimum of the three numbers.");
	}
}
