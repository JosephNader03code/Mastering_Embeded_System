/*
 ============================================================================
 Name        : Quiz2.c
 Author      : Joseph Nader
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[] , b[] , t[], i ;

	printf(" enter first array ");
	fflush(stdout);
	for(i = 0 ; i<10 ; i++)
		scanf("%d" , &a[i]);

	printf(" enter second array ");
	fflush(stdout);
	for(i = 0 ; i<5 ; i++)
		scanf("%d" , &b[i]);

	printf("array before swaping ");

	fflush(stdout);
	for(i = 0 ; i<10 ; i++)
		printf("%d" , a[i]);


	fflush(stdout);
	for(i = 0 ; i<5 ; i++)
		printf("%d" , b[i]);
}

