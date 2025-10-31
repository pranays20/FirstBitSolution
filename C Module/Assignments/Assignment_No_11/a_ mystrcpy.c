#include<stdio.h>

void myStrCopy(char *);

void main()
{
	char str[]="Hello";
	myStrCopy(str);
}
void myStrCopy(char *str)
{
	char str2[10];
	for(int i=0;str[i]!='\0';i++)
		str2[i]=str[i];              
	printf("String Copied : %s",str2);
}
