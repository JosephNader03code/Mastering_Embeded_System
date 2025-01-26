/*
 ============================================================================
 Name        : Check.c
 Author      : Joseph Nader
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int Check_Prime(int num);

int main() {
    int f, l, i, flag;
    printf("Enter 2 numbers Interval: ");
    fflush(stdin); fflush(stdout);
    scanf("%d %d", &f, &l);

    for (i = f + 1; i <= l; i++) {
        flag = Check_Prime(i);
        if (flag == 0)
            printf("%d\t", i);
    }

    return 0;
}

int Check_Prime(int num) {
    int j, flag = 0;
    for (j = 2; j <= num / 2; j++) {
        if (num % j == 0) {
            flag = 1;
            break;
        }
    }
    return flag;
}
