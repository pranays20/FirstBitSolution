#include <stdio.h>
#include<stdlib.h>

void main() {
    int n, i;
    int *arr;

    printf("Enter number of elements: ");
    scanf("%d", &n);
	arr = malloc(n * sizeof(int));
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) 
        scanf("%d", &arr[i]);

    printf("\nArray in reverse order: ");
    for(i = n - 1; i >= 0; i--) 
        printf("%d ", arr[i]);


    printf("\n");
}
