/*
 ============================================================================
 Name        : js.c
 Author      : Joseph Nader
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

		float x[2][2] ,y[2][2]  ;
		float  c[2][2] ;
		int i , j  ;
		printf("enter number of the first matrix :");
		for(i=0 ; i <2 ; i++ )
			for (j=0 ; j <2 ; j++)
			{
				printf("\nenter x[%d] [%d] : ",i+1 , j+1);
				fflush(stdin);fflush(stdout);
				scanf("%f" , &x[i][j]);
			}


		printf("\nenter number of the second matrix");
		for(i=0 ; i <2 ; i++ )
			for (j=0 ; j <2 ; j++)
			{
				printf("\nenter y[%d][%d] : ",i+1 , j+1);
				fflush(stdin);fflush(stdout);
				scanf("%f" , &y[i][j]);
			}

		printf("\nsum of matrix\n");
		for(i=0 ; i <2 ; i++ )
			for (j=0 ; j <2 ; j++)
			{
				c[i][j]= x[i][j] + y[i][j];
			}

		for(i=0 ; i <2 ; i++ )
			for (j=0 ; j <2 ; j++)
			{
				printf(" c[%d][%d] = %f : ",i+1 , j+1 ,  c[i][j]);
				if (j == 1)
					printf("\n");
			}
	return 0 ;
	}
