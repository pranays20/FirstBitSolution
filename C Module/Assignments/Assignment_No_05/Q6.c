#include<stdio.h>
void main()
{
	int n=5;
	for(int i=1;i<=n;i++)
	{
		for(int k=1;k<=i;k++)
			printf("%d ",k);
		printf("\n");
	}
}