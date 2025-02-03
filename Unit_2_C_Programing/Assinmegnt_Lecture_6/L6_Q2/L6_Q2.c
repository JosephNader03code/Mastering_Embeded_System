/*
 ============================================================================
 Name        :
 Author      : Joseph Nader
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
struct distance {
    int feet;
    float inch;
};
struct distance read_data() {
    struct distance d1;
    printf("\nEnter distance:\n");
    printf("Enter feet: ");
    fflush(stdout);
    scanf("%d", &d1.feet);
    printf("Enter inch: ");
    fflush(stdout);
    scanf("%f", &d1.inch);
    return d1;
}
int main() {
    struct distance d1, d2, result;
    d1 = read_data();
    d2 = read_data();
    result.feet = d1.feet + d2.feet ;
    result.inch = d1.inch +d2.inch;
    if(result.inch >= 12) {
            result.feet += (int)(result.inch / 12);
            result.inch = fmod(result.inch, 12.0);
    }
    printf("\nthe distance => %d feet and %.2f inches\n", result.feet , result.inch);
    return 0;
}
