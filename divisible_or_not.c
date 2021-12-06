#include<stdio.h>
main()
{
	int a,digit=0,i=1;
	printf("Enter a number:");
	scanf("%d",&a);
    if (a%5==0 && a%11==0)
    {
    	printf("The given number is divisible by both 5 and 11.");	
	}
	else
	{
		printf("The given number is not divisible by both 5 and 11.");
	}
}
