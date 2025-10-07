#include<stdio.h>
void main()
{
	int n=5;
	for(int i=n;i>0;i--)
	{
		for(int k=1;k<=i;k++)
			printf("* ");
		printf("\n");
	}
}