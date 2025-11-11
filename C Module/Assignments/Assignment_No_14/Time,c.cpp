#include <stdio.h>

struct Time {
    int hour;
    int min;
    int sec;
};

int main() {
    struct Time t1;

    printf("Enter Hour: ");
    scanf("%d", &t1.hour);

    printf("Enter Minute: ");
    scanf("%d", &t1.min);

    printf("Enter Second: ");
    scanf("%d", &t1.sec);

    printf("\n--- Time ---\n");
    printf("%02d:%02d:%02d\n", t1.hour, t1.min, t1.sec);
}
