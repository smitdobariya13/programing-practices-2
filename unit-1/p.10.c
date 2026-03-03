//Write a program to subtract two matrices.
#include <stdio.h>

int main()
{
    int i, j;
    int a[3][3], b[3][3], diff[3][3];

    printf("Enter elements of first 3x3 matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second 3x3 matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            diff[i][j] = a[i][j] - b[i][j];
        }
    }

    printf("Difference of the two matrices:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", diff[i][j]);
        }
        printf("\n");
    }

    return 0;
}
