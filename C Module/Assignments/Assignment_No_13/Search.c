#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int *arr,num, i ,n = 5;
    arr = (int*)malloc(n * sizeof(int));  

    printf("Enter 5 elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter number to search: ");
    scanf("%d", &num);

    for(i = 0; i < n; i++)
        if(arr[i] == num) {
            printf("Found");
            return 0;
        }

    printf("Not Found");
    return 0;
}