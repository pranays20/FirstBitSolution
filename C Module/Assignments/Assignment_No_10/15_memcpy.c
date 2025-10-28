#include <stdio.h>
#include <string.h>

void main()
{
    char src[] = "Hello";
    char dest[10];
    memcpy(dest, src, strlen(src)+1);
    printf("Copied: %s", dest);
}
