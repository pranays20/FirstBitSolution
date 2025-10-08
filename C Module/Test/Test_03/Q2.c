#include<stdio.h>
void main()
{
	int start = 1, end = 5,sum;
	for(int i=start; i<=end; i++)
	{
		if(i%2!=0)
		{
			sum += i;
		}
	}
	printf("Sum is : %d",sum);
}