#include<stdio.h>
void main()
{
	
	for(int k=1;k<=500;k++)
	{
		int no = k , i=1 , sum=0;
		while(i<=no/2)
		{
			if (no%i==0)
				sum = sum +i;
			i++;
		}
		if(no == sum)
			printf("%d is perfect\n",no);
	}			
}
