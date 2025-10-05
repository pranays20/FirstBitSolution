#include<stdio.h>
void main()
{
	int n = 12349, first, last, temp;

    last = n % 10;
    temp = n;
    while (temp >= 10) {
        temp /= 10;  
    }
    first = temp;
    printf("Sum of first and last digit = %d\n", first + last);
    
}