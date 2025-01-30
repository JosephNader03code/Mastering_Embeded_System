/*
 ============================================================================
 Name        : quiz8.c
 Author      : Joseph Nader
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int last_ocurance(int arr1[]);

int main()
{

	int arr1[10]={2,12,45,12,5,2} , i ,ocu , result;
	printf("the aray :\n") ;
	fflush(stdout); fflush(stdin);
	for( i=0 ; i <= 5 ; i++)
    printf("the index (%d) = %d\n", i+1 , arr1[i]);
	result = last_ocurance(&arr1) ;

	printf(" the index is ==> %d" , result);
	return 0 ;
}

int last_ocurance(int arr1[] )
{
	int i , ocu;
	printf("enter the number :");
	fflush(stdout); fflush(stdin);
	scanf("%d",&ocu);

	for(i =5 ; i>=0 ; --i)
	{
		if(arr1[i] == ocu)
			return i+1 ;

	}
	return -1 ;
}
