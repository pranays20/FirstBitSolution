#include <stdio.h>
#include<stdlib.h>

void main() {
    int n1, n2, i, j;
    int *arr1, *arr2, *merged;

	arr1 = malloc(10 * sizeof(int));
	arr2 = malloc(10 * sizeof(int));
	merged = malloc(20 * sizeof(int));
    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);

    printf("Enter %d elements for first array:\n", n1);
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);

    printf("Enter %d elements for second array:\n", n2);
    for(i = 0; i < n2; i++) 
        scanf("%d", &arr2[i]);
#include <stdio.h>

void main() {
    int n1, n2, i, j;
    int arr1[10], arr2[10], merged[20];

    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);

    printf("Enter %d elements for first array:\n", n1);
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);

    printf("Enter %d elements for second array:\n", n2);
    for(i = 0; i < n2; i++) 
        scanf("%d", &arr2[i]);

    for(i = 0; i < n1; i++) 
        merged[i] = arr1[i];

    for(j = 0; j < n2; j++) 
        merged[i + j] = arr2[j];

    printf("\nMerged array: ");
    for(i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }

    printf("\n");
}

    for(i = 0; i < n1; i++) 
        merged[i] = arr1[i];

    for(j = 0; j < n2; j++) 
        merged[i + j] = arr2[j];

    printf("\nMerged array: ");
    for(i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }

    printf("\n");
}
