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


	char choice;
	float x , y ;
	printf("Enter operator : ");
	fflush(stdin);fflush(stdout);
	scanf("%c", &choice);

	printf("Enter 2 numbers : ");
	fflush(stdin);fflush(stdout);
	scanf("%f%f",&x,&y);
	fflush(stdin);fflush(stdout);

	switch (choice)
	{
	case '*':
	{
		float multi ;
		multi = x * y;
		printf("the multiply 2 numbers = %.2f " , multi);

	}
	break;
	case '/':
	{
		float div ;
		div = x / y;
				printf("the devision 2 numbers = %.2f " , div);
	}
	break;
	case '-':
	{
		float sub ;
		sub = x - y;
						printf("the subtraction 2 numbers = %.2f " , sub);
	}
	break;

	case '+':
	{
								printf("the addtion 2 numbers = %.2f " , x + y);
	}
	break;
	default :
		printf("error !!! ");
		break;
	}

	return 0 ;

}
