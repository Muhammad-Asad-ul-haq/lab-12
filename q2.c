#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[100];
    float salary;
};

void swap(struct Employee *a, struct Employee *b) {
    struct Employee temp = *a;
    *a = *b;
    *b = temp;
}

void Sort(struct Employee e[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (e[j].salary > e[j + 1].salary) {
                swap(&e[j], &e[j + 1]);
            }
        }
    }
}

int main() {
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct Employee e[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);
        printf("Employee ID: ");
        scanf("%d", &e[i].id);
        getchar();
        printf("Employee Name: ");
        gets(e[i].name);
    
        printf("Employee Salary: ");
        scanf("%f", &e[i].salary);
    }

    Sort(e, n);

    printf("\nEmployee details sorted by salary:\n");
    for (int i = 0; i < n; i++) {
        printf("ID: %d, Name: %s and Salary: %.2f\n", e[i].id, e[i].name, e[i].salary);
    }

    return 0;
}
