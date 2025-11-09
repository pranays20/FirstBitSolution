#include <stdio.h>
#include<stdlib.h>

void main()
{
	int n, i;
    int *arr;

    printf("Enter number of elements: ");
    scanf("%d", &n);
	arr = (int*)malloc(n * sizeof(int));
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
	{
        scanf("%d", &arr[i]);
    }

    printf("\nEven numbers: ");
    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0)
            printf("%d ", arr[i]);
    }

    printf("\nOdd numbers: ");
    for(i = 0; i < n; i++) 
	{
        if(arr[i] % 2 != 0)
            printf("%d ", arr[i]);
    }

    printf("\n");
}
