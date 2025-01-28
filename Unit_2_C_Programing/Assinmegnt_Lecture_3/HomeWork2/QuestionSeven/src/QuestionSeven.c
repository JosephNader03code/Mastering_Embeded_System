/*
 ============================================================================
 Name        : QuestionSeven.c
 Author      : Joseph Nader
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main()
{


	  int num, i;
	  long unsigned int fact= 1;

	    printf("Enter an integer: ");
	    fflush(stdin);fflush(stdout);
	    scanf("%d", &num);

	    if (num < 0)
	    {
	        printf("Error!!! Factorial of negative number doesn't exist.\n");
	    }

	   else
	   {
	        for (i = 1; i <= num; i++)
	        {
	        	fact = fact*i ;
	        }
	        printf("Factorial = %lu \n", fact);
	    }

	return 0;
}
