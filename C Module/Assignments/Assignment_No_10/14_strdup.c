#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main() 
{
    char str[] = "Firstbits";
    char *copy = strdup(str);
    printf("Duplicated: %s", copy);
}
