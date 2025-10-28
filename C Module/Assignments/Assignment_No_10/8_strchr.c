#include <stdio.h>
#include <string.h>

void main() 
{
    char str[] = "Firstbits";
    char *pos = strchr(str, 'b');
    printf("After strchr: %s", pos);
}
