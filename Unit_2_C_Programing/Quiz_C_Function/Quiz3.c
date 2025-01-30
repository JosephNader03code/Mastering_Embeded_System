/*
 ============================================================================
 Name        : quiz3.c
 Author      : Joseph Nader
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void reverse(int arr1[] , int arr2[] )
{
	int i , j;
	for(i =5 , j =0 ; i>=0 ; --i , j++)
	{
		arr2[j] = arr1[i];
	}

	for( i=0 ; i <= 5 ; i++)
	printf("%d\t" , arr2[i]);
}

int main(void) {
	int arr1[10]={1,2,3,4,5,6} , arr2[10] , i;
	for(i = 0 ; i <= 5 ; i++)
		printf("%d" , arr1[i]);

	reverse( &arr1[] , &arr2[] );
	return 0 ;
}


