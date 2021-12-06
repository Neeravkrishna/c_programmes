#include<stdio.h>
main()
{
	int a;
	printf("Enter a year:");
	scanf("%d",&a);
	if (a%4==0)
	{
		printf("The year mentioned is a leap year.");
	}
	else
	{
		printf("The year entered is not a leap year.");
	}
}
