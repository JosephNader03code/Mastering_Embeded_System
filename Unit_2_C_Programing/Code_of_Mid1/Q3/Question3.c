/*
 ============================================================================
 Name        : Question3.c
 Author      : Joseph Nader
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int Is_Prime(int num);

void printed(int n1, int n2);

int main(void) {
	int n1, n2;
	printf("Enter 2 numbers:\n");
	fflush(stdout);
	scanf("%d %d", &n1, &n2);

	printf("Prime numbers between %d and %d are: \n", n1, n2);
	printed(n1, n2);

	return 0;
}

void printed(int n1, int n2)
{
	int i;
	for (i = n1; i <= n2; i++)
	{
		if (Is_Prime(i)) {
			printf("%d\t", i);
		}
	}
}

int Is_Prime(int num) {
	if (num <= 1)
		return 0;
	if (num == 2)
		return 1;
	if (num % 2 == 0)
		return 0;

	return 1;
}
