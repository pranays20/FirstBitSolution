#include <stdio.h>
void main() {
    int age;
    printf("Enter age: ");
    scanf("%d",&age);

    if(age < 12)
        printf("Child\n");
    else if(age <= 19)
        printf("Teenager\n");
    else if(age <= 59)
        printf("Adult\n");
    else
        printf("Senior\n");
}
