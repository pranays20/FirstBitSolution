#include <stdio.h>
#include <string.h>

void main() 
{
    char str[] = "Hello,World,Firstbits";
    char *token = strtok(str, ",");
    while(token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, ",");
    }
}
