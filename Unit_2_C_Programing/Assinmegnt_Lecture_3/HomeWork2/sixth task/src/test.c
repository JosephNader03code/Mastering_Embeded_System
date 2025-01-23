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
	int numInteger = 0 , sum ;
	printf("Enter an Integer :");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &numInteger );

	int i ;
	for(i = 1;i <= numInteger ; i++)
	{
		sum += i;
	}

	printf("Sum : %d" , sum);

return 0 ;
}
