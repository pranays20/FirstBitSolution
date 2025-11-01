#include<stdio.h>
#include<string.h>
void removeChar(char *,int);

void main()
{
	char str[]="firstbit";
	int index;
	printf(" String is : %s",str);
	printf("\n Enter index u want remove : ");
	scanf(" %d",&index);
	removeChar(str,index);
	printf("\n Final string is : %s",str);
}

void removeChar(char* str,int n)
{
	int len = strlen(str);	
	if(n < 0 || n >= len)
	{
		printf(" Invalid index");
		return;
	}
	
	for(int i=n;i<len;i++)
		str[i] = str[i+1];	
}