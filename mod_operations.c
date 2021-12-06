#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter a value for first number:");
	scanf("%d",&a);
	printf("enter a value for second number:");
	scanf("%d",&b);
	c=a%b;
	printf("The remainder when the numbers are divided is %d",c);
}
