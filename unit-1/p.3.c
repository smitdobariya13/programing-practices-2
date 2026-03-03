    //Enter N elements and find maximum and minimum value.
#include <stdio.h>

int main()
{
    int n, i;
    int a[100], max, min;

            printf("Enter number of elements: ");
        scanf("%d", &n);

    for(i = 0; i < n; i++)
        {
            printf("Enter element %d: ", i + 1);
            scanf("%d", &a[i]);
        }

    max = min = a[0];

    for(i = 1; i < n; i++)
        {
            if(a[i] > max)
                max = a[i];
            if(a[i] < min)
                min = a[i];
        }

            printf("Maximum value = %d\n", max);
            printf("Minimum value = %d\n", min);

    return 0;
}

