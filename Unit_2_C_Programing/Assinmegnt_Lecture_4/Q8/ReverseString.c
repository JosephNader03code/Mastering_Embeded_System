/*
 ============================================================================
 Name        : ReverseString.c
 Author      : Joseph Nader
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <string.h>

int main() {
	char str[100] ;
	char temp = 'g' ;
	int i , j ;

	printf("\nEnter the string :");
	fflush(stdin);fflush(stdout);
	//getc(str);
	scanf ("%s" ,str);

	i=0;
	j=strlen(str)-1;
	while(i<j)
	{
		temp= str[i];
		str[i] =  str[j];
		str[j] = temp ;

		 i++;
		 j--;
	}
	printf("\nReverse of String : %s",str);
}
