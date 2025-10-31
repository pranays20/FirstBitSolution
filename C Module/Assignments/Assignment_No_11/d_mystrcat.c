#include<stdio.h>

void myconcat(char *);

void main()
{
	char str[]="Hello";
    myconcat(str);
    printf("Concat : %s",str);
}
void myconcat(char *str)
{
	char str2[]="Wolrd";
	int i=0,j=0;
	while(str[i]!='\0')																					
		i++;	
	while(str2[j]!='\0')
	{
		str[i++]=str2[j++];
	}
	str[i]='\0';	
}