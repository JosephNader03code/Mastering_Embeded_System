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
	float a ,b,c;
	printf("Enter Three Numbers :");
	fflush(stdin);
	fflush(stdout);
	scanf("%f %f %f", &a , &b , &c);

	if (a > b && a >c)
	{
		printf(" The Biggest Number is : %f ",a);
	}
	else if (b > a && b >c)
		{
			printf(" The Biggest Number is : %f ",b);
		}
	else
	{
		printf(" The Biggest Number is : %f ",c);

	}
return 0 ;
}
