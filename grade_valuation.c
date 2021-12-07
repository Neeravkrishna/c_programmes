#include<stdio.h>
main()
{
	char c,E,V,G,A,F,e,f,g,a,v;
	scanf("%c",&c);
	if(c=='E'||c=='e')
	{
		printf("Excellent");
	}
	else if(c=='V'||c=='v')
	{
		printf("Very Good");
	}
	else if(c=='G'||c=='g')
	{
		printf("Good");
	}
	else if(c=='A'||c=='a')
	{
		printf("Average");
	}
	else if(c=='F'||c=='f')
	{
		printf("Fail");
	}
}
