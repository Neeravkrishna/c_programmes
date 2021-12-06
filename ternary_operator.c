#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter a value for a:");
	scanf("%d",&a);
	printf("Enter a value for b:");
	scanf("%d",&b);
	c=(a>b)?a:b;
	printf("%d",c);
}

