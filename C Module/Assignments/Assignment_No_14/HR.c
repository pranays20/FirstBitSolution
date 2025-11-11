#include <stdio.h>

struct HR {
    int id;
    char name[50];
    int salary; 	
    float commission;
};

void main() {
    struct HR h1;

    printf("Enter HR ID: ");
    scanf("%d", &h1.id);

    printf("Enter HR Name: ");
    scanf("%s", h1.name);

    printf("Enter Salary: ");
    scanf("%d", &h1.salary);

    printf("Enter Commission: ");
    scanf("%f", &h1.commission);

    printf("\n--- HR Details ---\n");
    printf("ID: %d\n", h1.id);
    printf("Name: %s\n", h1.name);
    printf("Salary: %d\n", h1.salary);
    printf("Commission: %.2f\n", h1.commission);
}
