#include<stdio.h>
void main()
{
	int n=4,no=1;
	for(int i=1;i<=n;i++)
	{
		for(int k=1;k<=i;k++)
		{
			printf("%d ",no);
			no++;
		}
		printf("\n");
	}
}