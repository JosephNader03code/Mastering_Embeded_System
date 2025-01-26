/*
 ============================================================================
 Name        : reverse.c
 Author      : Joseph Nader
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */



#include <stdio.h>

void Reverse();

int main()
{
    printf("Enter a sentence: \n\t");
    fflush(stdin);
    fflush(stdout);

    fflush();
    Reverse();
    return 0;
}

void Reverse()
{
    char c;
    scanf("%c", &c);
    if (c != '\n') {
        Reverse();
        printf("%c", c);
    }
}

