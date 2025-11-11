#include <stdio.h>

struct Complex {
    float real;
    float imaginary;
};

void main() {
    struct Complex c1;

    printf("Enter Real Part: ");
    scanf("%f", &c1.real);

    printf("Enter Imaginary Part: ");
    scanf("%f", &c1.imaginary);

    printf("\n--- Complex Number ---\n");
    printf("%.2f + %.2fi\n", c1.real, c1.imaginary);
}
