/*
 ============================================================================
 Name        : Transposed.c
 Author      : Joseph Nader
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
	int main() {

		int r , c , i , j , a[10][10] , t[10][10];
		printf("Enter Rows and Columns of matrix :\n");
		fflush(stdin); fflush(stdout);
		scanf("%d %d" , &r, &c);

		for(i=0 ; i < r ; i++ )
			for (j=0 ; j < c ; j++)
			{
				printf("\nEnter a[%d][%d] : ",i+1,j+1);
				fflush(stdin);fflush(stdout);
				scanf("%d" , &a[i][j]);
			}

		printf("\nBefore Transpose : \n");
		for(i=0 ; i < r ; ++i )
			for (j=0 ; j < c ; ++j)
			{
				printf("%d " , a[i][j]);
				if(j == c-1)
					printf("\n\n");
			}


		for(i=0 ; i < r ; ++i )
			for (j=0 ; j < c ; ++j)
		{
				t[j][i]=a[i][j];
		}

		printf("\nAfter Transpose : \n");
			for( i=0 ; i < c ; ++i )
				for (j=0 ; j < r ; ++j)
				{
					printf("%d " , t[i][j]);
					if(j == r-1)
									printf("\n");
				}
	return 0 ;
}
