#include <stdio.h>
#include <string.h>

void main() 
{
    char str[20] = "12345";
    memmove(str+2, str, 3);
    printf("After memmove: %s", str);
}
