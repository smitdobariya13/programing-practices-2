//Enter N elements and find out sum and average of them using dynamic array.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    int *arr;
    int sum = 0;
    float avg;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    arr = (int*)malloc(n * sizeof(int));

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    avg = (float)sum / n;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    free(arr);
    return 0;
}
