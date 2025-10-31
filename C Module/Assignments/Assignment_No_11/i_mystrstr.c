#include <stdio.h>

void main()
{
	char str[] = "Hello World";
    char sub[] = "World";

    //char *p = strstr(str, sub);
	printf("%s\n",strstr(str, sub));
//    if (p)
//        printf("Substring found: %s\n", p);
//    else
//        printf("Substring not found\n");
}