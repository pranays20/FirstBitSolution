#include<stdio.h>
void main()
{
	int n=5;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
			if(i==1 || j==1 || i==n || j==n || i==2 && j==2 || i==3 && j==3 || i==4 && j==4)
				printf(" * ");
			else
				printf("   ");
		printf("\n");
		printf("\n");
	}
}