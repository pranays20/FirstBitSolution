#include<stdio.h>
void length(char *);
void copy(char *);
void copyn(char *,int);
void concat(char *);

void main()
{
	char str[]="Hello";
	length(str);
	copy(str);
	copyn(str,3);
    concat(str);
}

void length(char *str)
{
	int len=0;
	for(int i=0;str[i]!='\0';i++)
		len++;
	printf("Length is : %d",len);
}

void copy(char *str)
{
	char str2[10];
	for(int i=0;str[i]!='\0';i++)
		str2[i]=str[i];              
	printf("\nCopied : %s",str2);
}

void copyn(char *str,int n)
{
	char str2[10];
	for(int i=0;i<n;i++)	
		str2[i]=str[i];
	str2[n]='\0';
	printf("\nCopied given : %s",str2);
	
}

void concat(char *str)
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
	printf("\nConcat : %s",str);
}
// 
// void concat(char *str) 
// {
//    int i = 0, j = 0;
//    char str2[]="world";
//    while (str[i] != '\0') 
//        i++;
//    while (str2[j] != '\0') {
//        str[i] = str2[j];
//        i++;
//        j++;
//    }
//    str[i] = '\0';
//    printf("\nConcat : %s",str);
//}