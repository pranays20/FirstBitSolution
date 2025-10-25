#include <stdio.h>
void main()
{
	int n, i;
    int arr[10];

    printf("Enter number of elements: ");
    scanf("%d", &n);

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
