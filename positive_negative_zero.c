#include<stdio.h>
main()
{
	int a;
	scanf("%d",&a);
	if(a>0)
	{
		printf("The number entered is a positive number.");
	}
	else if(a<0)
	{
		printf("The number entered is a negative number.");
	}
	else if(a==0)
	{
		printf("The number entered is 0.");
	}
}
