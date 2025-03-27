#include <stdio.h>
#include <stdlib.h>

struct sdata {
    int id;
    char name[40];
    float height;
};

struct sstudent {
    struct sdata stud_data;
    struct sstudent* pnext;
};

struct sstudent* gp = NULL;

void fill_the_rec(struct sstudent* new_student) {
    char temp_txt[40];

    printf("\nEnter the ID: ");
    gets(temp_txt);
    new_student->stud_data.id = atoi(temp_txt);

    printf("\nEnter the student full name: ");
    gets(new_student->stud_data.name);

    printf("\nEnter the height: ");
    gets(temp_txt);
    new_student->stud_data.height = atof(temp_txt);
}

void addstud() {
    struct sstudent* plast_stud;
    struct sstudent* pnew_stud = (struct sstudent*)malloc(sizeof(struct sstudent));

    if (!pnew_stud) {
        printf("\nMemory allocation failed.");
        return;
    }

    pnew_stud->pnext = NULL;
    
    if (gp == NULL) {
        gp = pnew_stud;
    } else {
        plast_stud = gp;
        while (plast_stud->pnext)
            plast_stud = plast_stud->pnext;
        plast_stud->pnext = pnew_stud;
    }

    fill_the_rec(pnew_stud);
}

int delete_stud() {
    char temp_txt[40];
    int select_id;

    printf("\nEnter the ID of the student to be deleted: ");
    gets(temp_txt);
    select_id = atoi(temp_txt);

    struct sstudent* pPrev_student = NULL;
    struct sstudent* pSelected_student = gp;

    while (pSelected_student) {
        if (pSelected_student->stud_data.id == select_id) {
            if (pPrev_student) {
                pPrev_student->pnext = pSelected_student->pnext;
            } else {
                gp = pSelected_student->pnext;
            }
            free(pSelected_student);
            printf("\nStudent record deleted successfully.");
            return 1;
        }
        pPrev_student = pSelected_student;
        pSelected_student = pSelected_student->pnext;
    }

    printf("\nStudent ID not found.");
    return 0;
}

void view_students() {
    int count = 0;
    struct sstudent* pCurrentStudent = gp;

    if (!gp) {
        printf("\nEmpty list.");
        return;
    }

    while (pCurrentStudent) {
        printf("\nRecord Number %d", count + 1);
        printf("\nID: %d", pCurrentStudent->stud_data.id);
        printf("\nName: %s", pCurrentStudent->stud_data.name);
        printf("\nHeight: %.2f", pCurrentStudent->stud_data.height);
        printf("\n------------------------");
        pCurrentStudent = pCurrentStudent->pnext;
        count++;
    }
}

void DeleteAll() {
    struct sstudent* pCurrentStudent = gp;
    struct sstudent* pTempStudent;

    if (!gp) {
        printf("\nEmpty list.");
        return;
    }

    while (pCurrentStudent) {
        pTempStudent = pCurrentStudent;
        pCurrentStudent = pCurrentStudent->pnext;
        free(pTempStudent);
    }

    gp = NULL;
    printf("\nAll student records deleted.");
}

int main() {
    char temp_text[40];
    int choice;

    while (1) {
        printf("\n==============================");
        printf("\nChoose one of the following options:\n");
        printf("1: Add Student\n");
        printf("2: Delete Student\n");
        printf("3: View Students\n");
        printf("4: Delete All\n");
        printf("5: Exit\n");
        printf("Enter your choice: ");

        gets(temp_text);
        choice = atoi(temp_text);

        printf("\n==============================\n");

        switch (choice) {
            case 1:
                addstud();
                break;
            case 2:
                delete_stud();
                break;
            case 3:
                view_students();
                break;
            case 4:
                DeleteAll();
                break;
            case 5:
                printf("\nExiting program...\n");
                exit(0);
            default:
                printf("\nWrong option, please try again.");
                break;
        }
    }
    return 0;
}
