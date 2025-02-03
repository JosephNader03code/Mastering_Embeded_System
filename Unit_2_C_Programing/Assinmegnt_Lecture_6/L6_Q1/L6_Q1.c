#include <stdio.h>
#include <stdlib.h>

struct Sstudent {
    char name[15];
    int rollnum;
    float marks;
};
struct Sstudent Read_data() {
    struct Sstudent fstudent;
    printf("Enter name: ");
    fflush(stdout);
    scanf("%s", fstudent.name);
    printf("Enter roll number: ");
    fflush(stdout);
    scanf("%d", &fstudent.rollnum);
    printf("Enter marks: ");
    fflush(stdout);
    scanf("%f", &fstudent.marks);
    return fstudent;
}
void print_data_ofStudent(struct Sstudent fstudent) {
    printf("\nDisplaying the student's Information:\n");
    printf("Student name: %s", fstudent.name);
    printf("\nStudent's roll number: %d", fstudent.rollnum);
    printf("\nStudent's marks: %.2f\n", fstudent.marks);
}
int main() {
    struct Sstudent fstudent;
    printf("Enter information of student:\n");
    fstudent = Read_data();
    print_data_ofStudent(fstudent);
    return 0;
}
