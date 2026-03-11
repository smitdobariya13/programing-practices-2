//Enter N elements and find out sum of odd and even numbers using dynamic array
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    int *arr;
    int oddSum = 0, evenSum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    arr = (int*)malloc(n * sizeof(int));

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

        if(arr[i] % 2 == 0)
            evenSum += arr[i];
        else
            oddSum += arr[i];
    }

    printf("Sum of even numbers = %d\n", evenSum);
    printf("Sum of odd numbers = %d\n", oddSum);

    free(arr);

    return 0;
}
