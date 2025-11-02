#include<stdio.h>
#include<string.h>
void removeOddIndex(char *);

void main()
{
	char str[]="firstbit solution";
	printf(" String is : %s",str);
	removeOddIndex(str);
	printf("\n Final String is : %s",str);
}

void removeOddIndex(char* str)
{
	int j=0,i;
	for(i=0;str[i]!='\0';i++)
	{
		if(i%2==0)
		{
			str[j] = str[i];
			j++;
		}
	}		
	str[j]='\0';
}