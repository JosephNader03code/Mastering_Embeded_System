/*
 ============================================================================
 Name        : SearchInArray.c
 Author      : Joseph Nader
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	int a[30] , num, i, ser;
	printf("Enter Number Of Element :\n");
	fflush(stdin); fflush(stdout);
	scanf("%d", &num);

	printf("\nEnter Values :");
	for(i=0 ; i < num ; i++ )
	{
			fflush(stdin); fflush(stdout);
			scanf("%d", &a[i]);
	}

	printf("\nEnter Element to be searched :");
	fflush(stdin); fflush(stdout);
				scanf("%d", &ser);

		for (i = 0 ; i < num ; i++)
		{
			if(a[i]==ser)
				printf("\nWe Found %d at index : %d" ,ser , i );
		}
}
