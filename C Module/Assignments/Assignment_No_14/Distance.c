#include <stdio.h>

struct Distance {
    int feet;
    int inch;
};

void main() {
    struct Distance d1;

    printf("Enter Feet: ");
    scanf("%d", &d1.feet);

    printf("Enter Inches: ");
    scanf("%d", &d1.inch);

    printf("\n--- Distance ---\n");
    printf("%d Feet %d Inches\n", d1.feet, d1.inch);
}
