/*
 ============================================================================
 Name        : Q6.c
 Author      : Joseph Nader
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i, j, isUnique;
    int arr[7] = {4, 2, 5, 2, 5, 7, 4};

    printf("The array = ");
    for (i = 0; i < 7; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nThe unique numbers are: ");
    for (i = 0; i < 7; i++)
    {
        isUnique = 1;
        for (j = 0; j < 7; j++)
        {
            if (i != j && arr[i] == arr[j])
            {
                isUnique = 0;
                break;
            }
        }
        if (isUnique) {
            printf("%d ", arr[i]);
        }
    }


    return 0;
}
