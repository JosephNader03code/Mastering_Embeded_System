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

void main()
{
//	Enter a integer: 25
//	You entered: 25
	int i ;
	printf("Enter a integer:");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&i);
	printf("You Enterd:%d\n",i);

}
