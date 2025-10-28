#include <stdio.h>
#include <string.h>

void main() 
{
    char a[] = "ABC";
    char b[] = "ABD";
    printf("memcmp result: %d", memcmp(a, b, 3));
}
