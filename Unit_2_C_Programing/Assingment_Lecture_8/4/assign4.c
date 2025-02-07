#include "stdio.h"

int main(){
	int arr[15] , size , i , *ptr;
	printf("Input the number of elements to store in the array (max 15) :\n");
	scanf("%d" , &size);
		printf("Input %d number of elements in the array :\n" , size);
		ptr = &arr[0];
		for(i =0 ; i  < size ; i++)
		{
			printf("element - %d : " , i+1 );
			scanf("%d",ptr);
			ptr++;
		}
		
			printf(" ----------------------------------------------- \n");

		ptr = &arr[size - 1];
		for(i = size ; i  >  0 ; i--)
		{
			printf("element - %d : %d\n" , i , *ptr);
			ptr--;
		}
return 0;
}