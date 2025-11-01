#include<stdio.h>
#include<string.h>
int countVowels(char *);

void main()
{
	char str[]="Sirst";
	int count = countVowels(str);
	printf("Total count is : %d",count);
}

int countVowels(char* str)
{
	int count=0,i=0;
	while(str[i]!='\0')
	{
		if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || 
			str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
			count++;
		i++;
	}
	return count;		
}