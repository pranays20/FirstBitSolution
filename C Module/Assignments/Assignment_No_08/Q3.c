#include <stdio.h>
void main()
{
	int n, i, sum = 0;
  	int arr[10];
  	printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) 
	{
        scanf("%d", &arr[i]);
        sum += arr[i];  
    }

    printf("Sum of all elements = %d\n", sum);  
}
