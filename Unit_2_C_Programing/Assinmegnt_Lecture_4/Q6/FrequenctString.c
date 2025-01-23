/*
 ============================================================================
 Name        : FrequenctString.c
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
	int i , count = 0;
	printf("Enter a String : ");
	fflush(stdin);fflush(stdout);
	gets(c);

	printf("get char to calc of frequency : ");
	fflush(stdin);fflush(stdout);
scanf("%c", &ch);
	for(i = 0 ; c[i]!='\0' ; ++i)
	{
		if(ch==c[i])
			++count;
	}
	printf("the char %c repeated %d times ", ch, count);
}
