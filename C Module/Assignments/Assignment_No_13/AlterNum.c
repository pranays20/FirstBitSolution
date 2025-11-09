#include <stdio.h>
#include<stdlib.h>

void main()
{
	int n, i;
    int *arr;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    arr = malloc(n * sizeof(int));
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) 
	{
        scanf("%d", &arr[i]);
    }

    printf("\nAlternate elements are: ");
    for(i = 0; i < n; i=i+2)
	{  
        printf("%d ", arr[i]);
    }

    printf("\n");
}
