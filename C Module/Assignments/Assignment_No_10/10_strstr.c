#include <stdio.h>
#include <string.h>

void main() 
{
    char str[] = "Hello Firstbits";
    char *pos = strstr(str, "First");
    printf("Substring found: %s", pos);
}
