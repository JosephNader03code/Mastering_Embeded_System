/*
 ============================================================================
 Name        : Question2.c
 Author      : Joseph Nader
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double calc(int num)
{
	if(num < 0)
	printf("error");
	else
		return sqrt(num);

}
int main(void) {
	int num;
	printf("Enter Number :");
	fflush(stdout);
	scanf("%d", &num);

	printf("Sum of Number is ==> %.2lf", calc(num));
}

