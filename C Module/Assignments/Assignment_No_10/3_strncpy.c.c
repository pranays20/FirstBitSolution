#include <stdio.h>
#include <string.h>

void main() {
    char src[] = "HelloWorld";
    char dest[20];
    strncpy(dest, src, 5);
    dest[5] = '\0';
    printf("Copied (5 chars): %s", dest);
}
