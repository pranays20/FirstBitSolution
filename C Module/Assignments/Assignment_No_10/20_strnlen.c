#include <stdio.h>
#include <string.h>

void main() 
{
    char str[] = "HelloWorld";
    printf("Length (max 5): %d", strnlen(str, 5));
}
