#include <stdio.h>

struct Date {
    int day, month, year;
};

int isLeap(int y) {
    return (y % 400 == 0) || (y % 4 == 0 && y % 100 != 0);
}

int valid(struct Date d) {
    if (d.month < 1 || d.month > 12 || d.day < 1) return 0;
    int mdays[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    if (d.month == 2 && isLeap(d.year)) mdays[2] = 29;
    return d.day <= mdays[d.month];
}

void main() {
    struct Date d;
    printf("Enter day month year: ");
    scanf("%d %d %d", &d.day, &d.month, &d.year);
    if (valid(d))
        printf("Valid Date: %02d/%02d/%04d\n", d.day, d.month, d.year);
    else
        printf("Invalid Date!\n");
}
