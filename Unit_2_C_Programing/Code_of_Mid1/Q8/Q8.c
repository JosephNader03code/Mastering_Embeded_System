/*
 ============================================================================
 Name        : Q8.c
 Author      : Joseph Nader
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i , a[5]={1,2,3,4,5};

	for(i=4 ; i>=0 ; --i)
	{
		printf("%d" ,a[i]);
	}
}
