#include<stdio.h>
#include<string.h>
int countWords(char *);

void main()
{
	char str[]="   firstbit      solution   in pune   ";
	printf(" String is : %s",str);
	int words = countWords(str);
	printf("\n Total words is : %d",words);
}

int countWords(char* str)
{
	int count=0,inword=0;
	{
		for(int i=0;str[i]!='\0';i++)
			if(str[i]==' '  || str[i]=='\t' || str[i]=='\n')
				inword=0;
			else if(inword==0)
			{
				inword=1;
				count++;
			}
	}
	return count;
}