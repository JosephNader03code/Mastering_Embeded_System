#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Input a string: \n");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    int len = strlen(str); 
    char *ptr = str + len - 1; 

    printf("Reversed string: ");
    while (ptr >= str) {
        printf("%c", *ptr);
        ptr--; 
    }

    printf("\n");
    return 0;
}
