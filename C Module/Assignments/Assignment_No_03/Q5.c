#include<stdio.h>
void main()
{
	int no = 153,n=no,temp;
	int sum=0;
	while(n>0)
	{
		temp = n % 10;
		sum = sum +(temp*temp*temp);
		n /=10;
	}
	if(no == sum)
		printf("%d is Armstrong ",no);
	else
		printf("%d is not Armstrong",no);
}