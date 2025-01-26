/*
 ============================================================================
 Name        : BaseToPower.c
 Author      : Joseph Nader
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/*
 ============================================================================
 Name        : Testing.c
 Author      : Joseph Nader
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int sqr(int base , int power);

int main()
{
	int base;
	int power;
	printf("Enter base number :");
	fflush(stdin);fflush(stdout);
	scanf("%d", &base);
	printf("Enter power number :");
	fflush(stdin);fflush(stdout);
	scanf("%d", &power);
	int result;
	result = sqr(base,power);
	 printf(" %d" ,result);
	return 0 ;
}

int sqr(int base , int power)
{
	int i ,result ;
	result =1;
	for(i = 1 ; i <=power ; i++)
	{
		result *= base ;
	}

  return result;
}

