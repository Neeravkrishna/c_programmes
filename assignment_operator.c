#include<stdio.h>
main()
{
	int a,b,c,d,e,f;
	printf("Enter a value for a:");
	scanf("%d",&a);
	printf("Enter a value for b:");
	scanf("%d",&b);
	printf("Enter a value for c:");
	scanf("%d",&c);
	printf("Enter a value for d:");
	scanf("%d",&d);
	a+=a;
	b-=b;
	c*=c;
	d/=d;
	e=a;
	e*=c;
	f=a;
	f+=a;
	printf("%d",a);
	printf("\n%d",b);
	printf("\n%d",c);
	printf("\n%d",d);
	printf("\n%d",e);
	printf("\n%d",f);
}
