#include<stdio.h>
#include<string.h>
void changeChar(char *);

void main()
{
	char str[]="firstbit";
	changeChar(str);
	printf("%s",str);
}

void changeChar(char* str)
{
	int len = strlen(str);
	char ch ,ch2;	
	
	ch = str[0];
	ch2 = str[len-1];
	str[0]=ch2;
	str[len-1]=ch;	
} 
