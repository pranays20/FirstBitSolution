#include<stdio.h>
void main()
{
	int num =151;
	if( num % 10 == num / 100) // only for 3 digit number
		printf("%d is pallindrome..!",num);
	else
		printf("%d is not pallindrome..!",num);
}				