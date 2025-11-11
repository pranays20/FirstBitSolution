#include <stdio.h>

struct SalesManager {
    int id;
    char name[50];
    float salary;
    float incentive;
    int target;
};

void main() {
    struct SalesManager sm1;

    printf("Enter Sales Manager ID: ");
    scanf("%d", &sm1.id);

    printf("Enter Name: ");
    scanf("%s", sm1.name);

    printf("Enter Salary: ");
    scanf("%f", &sm1.salary);

    printf("Enter Incentive: ");
    scanf("%f", &sm1.incentive);

    printf("Enter Target: ");
    scanf("%d", &sm1.target);

    printf("\n--- Sales Manager Details ---\n");
    printf("ID: %d\n", sm1.id);
    printf("Name: %s\n", sm1.name);
    printf("Salary: %.2f\n", sm1.salary);
    printf("Incentive: %.2f\n", sm1.incentive);
    printf("Target: %d\n", sm1.target);
}
