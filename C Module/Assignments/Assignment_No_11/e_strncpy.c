#include<stdio.h>

void mycopyn(char *,int);
void main()
{
	char str[]="Hello";
	mycopyn(str,3);
   
}
void mycopyn(char *str,int n)
{
	char str2[10];
	for(int i=0;i<n;i++)	
		str2[i]=str[i];
	str2[n]='\0';
	printf("Copied given : %s",str2);
	
}