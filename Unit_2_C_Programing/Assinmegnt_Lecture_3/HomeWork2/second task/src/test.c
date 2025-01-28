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
	char x;
	printf("Enter an alphabet :");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&x);
	(x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'a' ) ? printf(" (%c) Is Vowel" , x) :printf("(%c) Is Constant" , x);

return 0 ;
}
