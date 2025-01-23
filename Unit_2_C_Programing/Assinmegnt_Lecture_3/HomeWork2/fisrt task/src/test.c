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
 	int x;

	printf("Enter value To Check is Even Or Odd:");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&x);

	if (x % 2 == 0)
	{
		printf("\nThe Number %d Is Even :" , x);
	}
	else
	{
		printf("\n%d Is Odd" , x);
	}



return 0 ;
}
