#include<stdio.h>

void mystrupper(char *);
void main()
{
	char str[]="Hello World";
	mystrupper(str);
	printf("String Upper : %s",str);
}
void mystrupper(char *str)
{
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]>='a' && str[i]<='z')
			str[i] = str[i] - 32;
		i++;
	}
}

//void main()
//{
//	for(int i=0,j=0;i<=201;i++,j++)
//		printf("%d %c \n",j,i);
//}