/*
 ============================================================================
 Name        : test.c
 Author      : Joseph Nader
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main()
{
	float a;
	printf("Enter Number:");
	fflush(stdin);
	fflush(stdout);
	scanf("%f", &a );

	if (a > 0)
	{
		printf("  Number %.2f is Postive ",a);
	}
	else if (a < 0)
		{
		printf("  Number %.2f is Negative ",a);		}
	else
	{
		printf(" U Entered Zero %.2f ",a);

	}
return 0 ;
}
