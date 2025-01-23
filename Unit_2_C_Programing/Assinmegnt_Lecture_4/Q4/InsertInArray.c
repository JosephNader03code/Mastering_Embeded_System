/*
 ============================================================================
 Name        : InsertInArray.c
 Author      : Joseph Nader
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int a[30] , num , i , element , location;
	printf("Enter Number Of Element :\n");
	fflush(stdin); fflush(stdout);
	scanf("%d", &num);

	for(i=0 ; i < num ; i++ )
	{
			fflush(stdin); fflush(stdout);
			scanf("%d", &a[i]);
	}

	printf("Enter Element to Be Insert :\n");
	fflush(stdin); fflush(stdout);
		scanf("%d", &element);

		printf("\nEnter Location :");
 	fflush(stdin); fflush(stdout);
				scanf("%d", &location);

for (i=num-1 ; i >= (location-1) ; --i)
{
	a[i+1]= a[i];
}

num++;
a[location-1] = element ;

printf("\n The List :\n");
for(i=0 ; i < num ; i++ )
{
	printf(" %d " ,a[i]);
}

	return 0;
}
