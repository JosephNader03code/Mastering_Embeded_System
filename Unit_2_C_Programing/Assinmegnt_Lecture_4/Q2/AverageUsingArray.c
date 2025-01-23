/*
 ============================================================================
 Name        : AverageUsingArray.c
 Author      : Joseph Nader
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int num , i ;
	float sum , average ;
	float arr[100];
	printf("Enter The Numder Of Data :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);
	while(num > 100 || num <0)
	{
		printf("error !!! Please Entered Between 1 to 100 .\n");
		printf("Enter The Numder Of Data Again :");
		fflush(stdin);fflush(stdout);
		scanf("%d",&num);
	}

	for(i = 0 ; i < num ; ++i)
	{
		printf("\nEnter Numder :");
		fflush(stdin);fflush(stdout);
		scanf("%f",&arr[i]);
		sum += arr[i];
	}
	average = sum /num ;

	printf("The Average Of Data = %.2f" , average );


	return 0 ;
}
