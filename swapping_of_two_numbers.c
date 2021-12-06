#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter anumber for a:");
	scanf("%d",&a);
	printf("Enter anumber for b:");
	scanf("%d",&b);
	c=a;
    a=b;
    b=c;
    printf("%d,a");
    printf("%d,b");
}
