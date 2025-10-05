#include<stdio.h>
void main()
{
	int no = 6 , i=1 , sum=0;
	while(i<=no/2)
	{
		if (no%i==0)
			sum = sum +i;
		i++;
	}
	if(no == sum)
		printf("%d is perfect",no);
	else
		printf("%d is not perfect",no);		
}