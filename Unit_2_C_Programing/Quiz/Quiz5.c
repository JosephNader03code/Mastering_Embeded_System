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
int set_bit(int n ,int bit)
{
	return n &= ~( 1<<bit );
}
int main(void) {
	int bit , n ;

	printf("enter number : ");
	fflush(stdout);
	scanf("%d" , &n);

	printf("bit postion : ");
	fflush(stdout);
	scanf("%d" , &bit);

	printf(" the result : %d " , set_bit(n , bit) );
}
