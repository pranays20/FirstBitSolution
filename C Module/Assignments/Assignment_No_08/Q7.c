#include <stdio.h>
void main()
{
	int n, i, j;
    int arr1[10],arr2[10],sum[10];

    printf("Enter number of two array's  elements : ");
    scanf("%d", &n);

    printf("Enter %d elements of array first :\n", n);
    for(i = 0; i < n; i++) 
        scanf("%d", &arr1[i]);
        
    printf("Enter %d elements of array second :\n", n);
    for(i = 0; i < n; i++) 
        scanf("%d", &arr2[i]);
    
	for(i=0;i<n;i++)
	{
		sum[i]=arr1[i]+arr2[i];
	}
	
	printf("\nSum of both arrays (third array): ");
    for(i = 0; i < n; i++) 
        printf("%d ", sum[i]);
    
    printf("\n");
}
