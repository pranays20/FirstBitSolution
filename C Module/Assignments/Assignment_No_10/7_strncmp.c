#include <stdio.h>
#include <string.h>

void main() 
{
    char s1[] = "Hello";
    char s2[] = "Helium";
    printf("strncmp result: %d", strncmp(s1, s2, 3));
}
