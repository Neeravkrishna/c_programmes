#include<stdio.h>
main()
{
	int a,b;
	printf("Enter a value for a:");
	scanf("%d",&a);
	printf("Enter a value for b:");
	scanf("%d",&b);
	printf("%d",(a>b)&&(a<b));
	printf("\n%d",!(a<b));
	printf("\n%d",(a>b)||(a<b));
}
