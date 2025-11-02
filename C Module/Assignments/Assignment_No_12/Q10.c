#include<stdio.h>
#include<string.h>
void main()
{
	char str[10];
	printf("Enter String to check the Palindrome : \n");
	scanf("%s",str);
	char arr[10];
	strcmp(str, strrev(strcpy(arr, str))) == 0 ? printf("Palindrome") : printf("Not Palindrome");

}