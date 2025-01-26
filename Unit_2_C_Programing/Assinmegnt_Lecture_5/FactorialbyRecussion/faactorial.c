/*
 ============================================================================
 Name        : faactorial.c
 Author      : Joseph Nader
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int factorial_number(int num);

int main() {
    int num, store;
    printf("Enter a Positive Number: ");
    fflush(stdin); fflush(stdout);
    scanf("%d", &num);

    store = factorial_number(num);
    printf("Factorial of %d is %d", num, store);

    return 0;
}

int factorial_number(int num) {
    if (num == 0 || num == 1) {
        return 1;
    } else {
        return num * factorial_number(num - 1);
    }
}
