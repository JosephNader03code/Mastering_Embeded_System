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
//	Write C Program to Add Two Integers
//
//	i should see the Console as following:
//	##########Console-output###
//	Enter two integers: 12
//	11
//	Sum: 23
	int i ,j ;
	int sum =0;
	printf("Enter two integers:");
	fflush(stdin);
	fflush(stdout);
	scanf("%d %d",&i , &j);
	sum = i + j;
	printf("Sum:%d \n",sum);
return 0 ;
}
