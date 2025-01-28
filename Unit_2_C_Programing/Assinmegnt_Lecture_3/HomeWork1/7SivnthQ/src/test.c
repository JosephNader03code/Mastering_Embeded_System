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
//	EX7:
//	it is an interview trick
//
//	Write Source Code to Swap Two Numbers without temp variable.

 	int x , y ;
	printf("Enter value of a:");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&x);

	printf("Enter value of b:");
		fflush(stdin);
		fflush(stdout);
		scanf("%d",&y);

		x = x ^ y;
		y = y ^ x;
		x = x ^ y;

		printf("\nEnter value of a: %d",x);
		printf("\nEnter value of b: %d",y);

return 0 ;
}
