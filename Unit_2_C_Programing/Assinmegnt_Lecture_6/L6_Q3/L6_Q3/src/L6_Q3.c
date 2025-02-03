/*
 ============================================================================
 Name        : L6_Q3.c
 Author      : Joseph Nader
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct Scopmlex {
    float real ;
    float imagine ;
};

struct Scopmlex Read_data(){
    struct Scopmlex d ;
    printf("Enter real number and imagine number Respectively: ");
    fflush(stdout);
    scanf("%f", &d.real );
    scanf("%f", &d.imagine);
    return d ;
}

struct Scopmlex ADD(struct Scopmlex d1 , struct Scopmlex d2) {
    struct Scopmlex result ;
    result.real = d1.real + d2.real;
    result.imagine = d1.imagine + d2.imagine;
    return result;
}

int main() {
    struct Scopmlex d1 , d2 , Sum;

    d1 = Read_data();
    d2 = Read_data();
    Sum = ADD(d1, d2);

    printf("The Sum is: %.2f + %.2fi\n", Sum.real, Sum.imagine);
    return 0;
}

