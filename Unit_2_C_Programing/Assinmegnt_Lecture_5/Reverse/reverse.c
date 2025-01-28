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
    printf("Enter a numder: \n\t");
    fflush(stdin);
    fflush(stdout);

    fflush();
    Reverse();
    return 0;
}

void Reverse()
{
    int c;
    scanf("%d", &c);
    if (c != '\n') {
        Reverse();
        printf("%d", c);
    }
}

