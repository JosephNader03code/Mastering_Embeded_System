/*
 ============================================================================
 Name        : Q4.c
 Author      : Joseph Nader
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int main(void) {
    int num, i, sto[10];

    printf("Enter number: ");
    fflush(stdout);
    scanf("%d", &num);

    i = 0;
    while (num != 0 && i < 10) {
        sto[i] = num % 10;
        num = num / 10;
        i++;
    }


    printf("Digits in reverse order: ");
    for (i = 0; i < 10 && sto[i] != 0; i++) {
        printf("%d", sto[i]);
    }

    return 0;
}
