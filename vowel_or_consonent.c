#include<stdio.h>
main()
{
	char z;
	scanf("%c",&z);
	if (z=='a'||z=='e'||z=='i'||z=='o'||z=='u'||z=='A'||z=='E'||z=='I'||z=='O'||z=='U')
	{
		printf("The given alphabet is an vowel.");
	}
	else
	{
		printf("The given alphabet is a consonent.");
	}
}
