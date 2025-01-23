/*
 ============================================================================
 Name        : test.c
 Author      : Joseph Nader
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main()
{
//Write C Program to Multiply two Floating Point Numbers
//i should see the Console as following:
//##########Console-output###
//
//###########################
//Enter two numbers: 2.4
//1.1
//Product: 2.640000

 	float i ,j , multiply =0 ;
	printf("Enter two numbers:");
	fflush(stdin);
	fflush(stdout);
	scanf("%f %f", &i , &j);
	multiply = i * j;
	printf("Sum:%f \n",multiply);
return 0 ;
}
