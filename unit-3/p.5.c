//Enter N elements and find out sum of prime numbers using dynamic array.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j, count, sum = 0;
    int *arr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    arr = (int*)malloc(n * sizeof(int));

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        count = 0;

        for(j = 1; j <= arr[i]; j++)
        {
            if(arr[i] % j == 0)
                count++;
        }

        if(count == 2)
            sum = sum + arr[i];
    }

    printf("Sum of prime numbers = %d", sum);

    free(arr);

    return 0;
}
