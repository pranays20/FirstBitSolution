#include<stdio.h>
#include<string.h>
void mystrrev(char *);
void main()
{
	char str[]="Hello world";
	mystrrev(str);
	printf("String Reverse : %s",str);
}
void mystrrev(char *str)
{
	int len = strlen(str);
	for(int i=0,j=len-1;i<=len/2;i++,j--)
	{
		char str3 = str[i];
		str[i]=str[j];
		str[j]=str3;
	}
	
}