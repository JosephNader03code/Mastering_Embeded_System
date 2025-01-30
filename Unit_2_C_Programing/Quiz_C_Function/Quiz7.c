/*
 ============================================================================
 Name        : quiz7.c
 Author      : Joseph Nader
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int check_power3(int n)
{
	double i ;
	i = log(n) / log(3);
	return i== trunc(i);
}
int main(void) {
	int n ;
	printf("enter number :\t");
	fflush(stdout);fflush(stdin);
	scanf("%d", &n);

	check_power3(n) ? printf("%d ==> 0" ,n) :printf("%d ==> 1" ,n);
}
