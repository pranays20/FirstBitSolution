#include<stdio.h>

int mystrcmp(char *,char *); 
void main()
{
	char s1[20] = "apple";
    char s2[20] = "banana";

    int result = mystrcmp(s1, s2);

    if (result == 0)
        printf("Strings are equal\n");
    else if (result < 0)
        printf("First string is smaller\n");
    else
        printf("First string is greater\n");

}
int mystrcmp(char *str1,char *str2) 
{
    int i = 0;    
    while (str1[i] == str2[i]) 
	{    
        if (str1[i] == '\0')       
            return 0;              
        i++;
    }    
    return str1[i] - str2[i];
}