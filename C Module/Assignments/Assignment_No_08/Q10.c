#include <stdio.h>

void main() {
    int n, i, j, temp;
    int arr[10];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) 
        scanf("%d", &arr[i]);
    
    for(i = 0; i < n - 1; i++) 
	{
        for(j = i + 1; j < n; j++) 
		{
            if(arr[i] > arr[j]) 
			{
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("\nSorted array in ascending order: ");
    for(i = 0; i < n; i++) 
        printf("%d ", arr[i]);

    printf("\n");
}
