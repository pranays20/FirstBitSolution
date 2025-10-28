#include <stdio.h>
#include <string.h>

void main()
{
    char str[] = "banana";
    char *pos = strrchr(str, 'a');
    printf("Last 'a' found at: %s", pos);
}
