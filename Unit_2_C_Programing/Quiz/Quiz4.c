/*
 ============================================================================
 Name        : Quiz5.c
 Author      : Joseph Nader
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

unsigned int ch_to_unit(char ch)
{
	return ( ch - '0');
}
int main(void) {

	unsigned int n ;
	char ch ;
	printf("enter number ");
	fflush(stdout);fflush(stdin);
	scanf("%d" , &ch);
	n =  ch_to_unit('5');
	printf("%u", n);
}
