#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, num = 10;

    for (i = 0; i < num; --num) {
        for (j = 0; j < num; j++) {
            printf("%d\t", j);
        }
        printf("\n");
    }

    return 0;
}