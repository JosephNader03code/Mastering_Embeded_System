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
	char a;
	printf("Enter a character :");
	fflush(stdin);
	fflush(stdout);
	scanf("%c", &a );

	if (a == 'o' ||  a == 'O' || a == 'J' ||a == 'j' )
	{
		printf(" %c is character ", a);
	}
	else
		{
		printf(" %c is not character ", a);
		}

return 0 ;
}
