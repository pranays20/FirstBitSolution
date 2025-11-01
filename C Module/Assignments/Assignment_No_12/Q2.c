#include<stdio.h>
void charReplace(char *);

void main()
{
	char str[]="amazing apple always attracts ants";
	charReplace(str);
	printf("%s",str);
}

void charReplace(char* str)
{
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]=='a')
			str[i]='$';
		i++;
	}
	
}