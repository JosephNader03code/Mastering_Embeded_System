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
//	Write C Program to Find ASCII Value of a Character
//
//	#########Console_output######
//	Enter a character: G
//	ASCII value of G = 71
//	#############################

 	char x ;
	printf("Enter a character:");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&x);
	printf("ASCII value of (%c) = %d \n",x , x);
return 0 ;
}
