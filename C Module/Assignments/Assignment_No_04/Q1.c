#include<stdio.h>
void main()
{
	for(int k=0;k<=500;k++)
	{
		int no = k ,n=no,temp;
		int sum=0;
		while(n>0)
		{
			temp = n % 10;
			sum = sum +(temp*temp*temp);
			n /=10;
		}	
		if(no == sum)
			printf("%d is armstrong \n",k);

	}
}