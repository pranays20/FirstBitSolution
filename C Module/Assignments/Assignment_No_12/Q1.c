#include<stdio.h>
int charSearch(char *,char );
void main()
{
	char str[20],ch;
	printf("Enter Your String : ");
	scanf("%s",str);
	//fflush(stdin);
	printf("Enter character you want to search : ");
	scanf(" %c",&ch);
	
	int res = charSearch(str,ch);
	if(res == 1)
		printf("%c is found...!",ch);
	else
		printf("%c is nottt found...!",ch);
}

int charSearch(char* str,char ch)
{
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]==ch)			
			return 1;						
		i++;
	}
	return 0;
	
}