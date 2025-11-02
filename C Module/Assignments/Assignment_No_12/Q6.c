#include<stdio.h>
#include<string.h>
void replaceSpace(char *);

void main()
{
	char str[]="firstbit solution pune";
	printf(" String is : %s",str);
	replaceSpace(str);
	printf("\n Final String is : %s",str);
}

void replaceSpace(char* str)
{
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]==' ')
			str[i]='#';	
		i++;
	}		
}