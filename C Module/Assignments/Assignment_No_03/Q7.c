#include<stdio.h>
void main()
{
	int no = 5 , i=1 ,sum = 1;
	while(i<=no)
	{
		sum = sum * i;
		i++;
	}
	printf("%d",sum);
}	