#include <stdio.h>
#include <string.h>

void main() {
    char src[] = "Firstbits";
    char dest[20];
    strcpy(dest, src);
    printf("Copied string: %s", dest);
}
