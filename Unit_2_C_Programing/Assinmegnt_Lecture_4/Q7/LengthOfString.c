/*
 ============================================================================
 Name        : LengthOfString.c
 Author      : Joseph Nader
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	char c[1000] , ch ;
	int i;
	printf("Enter a String : ");
		fflush(stdin);fflush(stdout);
		gets(c);
	for(i = 0 ; c[i]!='\0' ; ++i);
	printf("string length = %d " , i);

}
