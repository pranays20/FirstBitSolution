#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n, i, sum = 0;
  	int *arr;
  	printf("Enter number of elements: ");
    scanf("%d", &n);

	arr = (int*)malloc(n * sizeof(int));
	
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) 
	{
        scanf("%d", &arr[i]);
        sum += arr[i];  
    }

    printf("Sum of all elements = %d\n", sum);  
}
