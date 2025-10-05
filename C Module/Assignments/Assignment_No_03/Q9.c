#include<stdio.h>
void main()
{		
	int n = 121, temp, rev = 0;
    temp = n;
    while (temp > 0)
	{
        rev = rev * 10 + temp % 10;  
        temp /= 10;
    }
    if (rev == n)
        printf("%d is a Palindrome\n", n);
    else
        printf("%d is Not a Palindrome\n", n);
        
    /*int num =121;
	if( num % 10 == num / 100) // only for 3 digit number
		printf("%d is palindrome..!",num);
	else
		printf("%d is not palindrome..!",num);*/
}				