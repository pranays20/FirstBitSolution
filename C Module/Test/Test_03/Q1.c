#include<stdio.h>
void main()
{
	int start = 10, end = 40;
	for(int i=start; i<=end ;i++)
	{
		if(i%2==0)
			printf("%d ",i);
	}
	printf("\n");
	for(int i=start; i<=end ;i++)
	{
		if(i%2!=0)
			printf("%d ",i);
	}
}