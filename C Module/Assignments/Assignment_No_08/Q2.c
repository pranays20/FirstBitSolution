#include<stdio.h>
void main()
{
	int arr[5],sr,flag=0;
	printf("Enter 5 no: ");
	for(int i=0;i<5;i++)
		scanf("%d",&arr[i]);
	printf("Entered array no\n");
	for(int j=0;j<5;j++)
		printf("%d ",arr[j]);

	
	for(int k=0;k<5;k++)
	{
		if(arr[k]==sr)
		{
			printf("Yes %d is there ",arr[k]);
			flag=1;	
			break;
		}		
	}
	if(flag==0)
			printf("\n%d is not found",sr);
	else
		printf("\nEnter %d is found..",sr);

}