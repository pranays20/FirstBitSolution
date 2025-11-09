#include <stdio.h>
#include<stdlib.h>

void main()
{
	int n, i, j, flag;
    int *arr;

    printf("Enter number of elements: ");
    scanf("%d", &n);
	arr = malloc(n * sizeof(int));
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) 
        scanf("%d", &arr[i]);
    
    printf("\nPrime numbers in the array are: ");
    for(i = 0; i < n; i++)
	{
        int num = arr[i];
        if(num <= 1)
            continue; 

        flag = 0;
        for(j = 2; j * j <= num; j++)
		{
            if(num % j == 0) 
			{
                flag = 1;
                break;
            }
        }
        if(flag == 0)
            printf("%d ", num);
    }

    printf("\n");
}
