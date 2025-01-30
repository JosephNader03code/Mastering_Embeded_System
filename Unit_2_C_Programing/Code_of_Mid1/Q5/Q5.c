/*
 ============================================================================
 Name        : Q5.c
 Author      : Joseph Nader
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
    int num, i = 0, binary[100];

    printf("Enter a decimal number: ");
    fflush(stdout);
    scanf("%d", &num);
    int copy ;
    copy = num ;
    if (num == 0) {
        printf("Binary: 0\n");
        return 0;
    }

  while (num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }
int count = 0;

	printf("Binary of %d is " , copy);
    for (i = i - 1; i >= 0; i--)
    {
        printf("%d", binary[i]);
        count++;
    }
    printf(" So has %d ones \n" , count);

    return 0;
}
