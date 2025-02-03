#include <stdio.h>
#include <stdlib.h>

struct Sstudent {
    char name[15];
    int rollnum;
    float marks;
};

void Store_Data(struct Sstudent array[10]) {
    int i;
    for(i = 0; i < 3; i++) {
        printf("Enter roll number: ");
        fflush(stdout);
        scanf("%d", &array[i].rollnum);

        printf("Enter name: ");
        fflush(stdout);
        scanf("%s", array[i].name);

        printf("Enter marks: ");
        fflush(stdout);
        scanf("%f", &array[i].marks);
    }
}

void print_data(struct Sstudent array[]) {
    printf("\nDisplaying the student's Information:\n");
    int i;
    for(i = 0; i < 3; i++) {
        printf("Student name: %s\n", array[i].name);
        printf("Student's roll number: %d\n", array[i].rollnum);
        printf("Student's marks: %.2f\n", array[i].marks);
    }
}

int main() {
    struct Sstudent array[10] = {0};
    printf("Enter information of students:\n");
    Store_Data(array);
    print_data(array);
    return 0;
}
