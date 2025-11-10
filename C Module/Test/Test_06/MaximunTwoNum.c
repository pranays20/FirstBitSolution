#include<stdio.h>

void main()
{
	int arr[]={1,2,3,4,8,8,9,5};
	
	int s = sizeof(arr) / sizeof(arr[0]);
	printf("Given Aaray is : ");
	for(int i=0;i<s;i++)
		printf("%d ",arr[i]);
		
	int maxFirst=arr[0],maxSecond;
	for(int i=0;i<s;i++)
	{
		if(arr[i]>maxFirst)
		{
			maxSecond=maxFirst;
			maxFirst=arr[i];
		}
		else if(arr[i] > maxSecond && arr[i] < maxFirst)
			maxSecond=arr[i];
	}

	printf("\nMaximun 2 number is : %d %d",maxFirst,maxSecond);
}