#include <stdio.h>
void main() {
 
    float price = 550;          
    char is_student = 'y';     

    float discount = 0, final_price;

    if (is_student == 'y' || is_student == 'Y') {
        if (price > 500) {
            discount = price * 0.20;
        } else {
            discount = price * 0.10;
        }
    } else {
        if (price > 600) {
            discount = price * 0.15;
        } else {
            discount = 0;
        }
    }

    final_price = price - discount;

    printf("Price: %.2f\n", price);
    printf("Student: %c\n", is_student);
    printf("Discount Applied: %.2f\n", discount);
    printf("Final Price after discount: %.2f\n", final_price);

}
