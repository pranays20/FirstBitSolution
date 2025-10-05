#include<stdio.h>
void main()
{
	int count = 0;
	for(int k=1;k<=500;k++)
	{
		int no = k , i = 2 , flag = 0;
		while(i<no/2)
		{
			if(no%i==0)
			{	
				flag = 1;
				break;
			}
			i++;
		}
		if(flag == 0)
		{
			printf("%d\n",no);
			count++;
		}
			
	}
	printf("Totol prime no is : %d",count);
}

