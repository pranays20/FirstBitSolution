#include <stdio.h>

struct Admin {
    int id;
    char name[50];
    int salary;
    float allowance;
};

void main() {
    struct Admin a1;

    printf("Enter Admin ID: ");
    scanf("%d", &a1.id);

    printf("Enter Admin Name: ");
    scanf("%s", a1.name);

    printf("Enter Salary: ");
    scanf("%d", &a1.salary);

    printf("Enter Allowance: ");
    scanf("%f", &a1.allowance);

    printf("\n--- Admin Details ---\n");
    printf("ID: %d\n", a1.id);
    printf("Name: %s\n", a1.name);
    printf("Salary: %d\n", a1.salary);
    printf("Allowance: %.2f\n", a1.allowance);
}
