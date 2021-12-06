#include<stdio.h>
main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if (a+b+c == 180)
	{
		printf("The given angles form a triangle");
	}
	else
	{
		printf("The given angles does not form a triangle");
	}
}
