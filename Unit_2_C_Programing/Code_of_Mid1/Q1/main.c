/*
 * main.c
 *
 *  Created on: Jan 28, 2025
 *      Author: hp
 */
#include <stdio.h>
#include <stdlib.h>
int summtion(int num) {
	int sum = 0;
	while (num != 0) {
		sum += num % 10;
		num = num / 10;
	}
	return sum;
}

int main(void) {
	int num;
	printf("Enter Number To Addtion");
	fflush(stdout);
	scanf("%d", &num);

	printf("Sum of Number is ==> %d", summtion(num));

}
