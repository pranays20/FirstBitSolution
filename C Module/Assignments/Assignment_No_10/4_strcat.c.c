#include <stdio.h>
#include <string.h>

void main() {
    char str1[] = "Hello";
    char str2[] = "World";
    strcat(str1,str2);    
    printf("After strcat: %s", str1);
}
