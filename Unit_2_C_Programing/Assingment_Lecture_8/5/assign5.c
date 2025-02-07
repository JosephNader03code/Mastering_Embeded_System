#include <stdio.h>

struct employee {
    char *empname;
    int empid;
};

int main() {
    struct employee emp1 = {"Jhon", 1001}, emp2 = {"Alex", 1002}, emp3 = {"Taylor", 1003};
	struct employee *arr[] = {&emp1, &emp2, &emp3};
    struct employee (*(*pt)[3]) = &arr;
	
    for (int i = 0; i < 3; i++)
		{
        printf("Employee %d: Name = %s, ID = %d\n", i + 1, (*pt)[i]->empname, (*pt)[i]->empid);
    }

    return 0;
}
