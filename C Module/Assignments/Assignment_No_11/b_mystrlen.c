#include<stdio.h>
void mylength(char *);

void main()
{
	char str[]="Hello";
	mylength(str);
}
void mylength(char *str)
{
	int len=0;
	for(int i=0;str[i]!='\0';i++)
		len++;
	printf("Length is : %d",len);
}
