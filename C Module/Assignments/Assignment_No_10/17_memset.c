#include <stdio.h>
#include <string.h>

void main()
{
    char str[10] = "Hello";
    memset(str, '*', 3);
    printf("After memset: %s", str);
}
