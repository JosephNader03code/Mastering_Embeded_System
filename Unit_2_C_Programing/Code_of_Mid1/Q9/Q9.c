/*
 ============================================================================
 Name        : Q9.c
 Author      : Joseph Nader
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char arr1[55], arr2[55];
	int i = 0, j = 0;
	printf("Enter The String:");
	fflush(stdout);
	fflush(stdin);
	gets(arr1);
	while (arr1[i] != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		arr2[j] = arr1[--i];
		++j;
	}
	arr2[j] = '\0';
	printf("Reversed String :");

	for (i = 0; arr2[i] != '\0'; i++)
	{
		if (arr2[i + 1] == ' ' || arr2[i +1] == '\0')
		{
			for (j = i; j >= 0 && arr2[j] != ' '; j--)
			{
				printf("%c", arr2[j]);
			}
			printf(" ");
		}
	}
	return 0;
}

