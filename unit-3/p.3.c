//Find out maximum and minimum number using pointer to function.
#include <stdio.h>

void maxmin(int *a, int *b)
{
    if(*a > *b)
    {
        printf("Maximum = %d\n", *a);
        printf("Minimum = %d\n", *b);
    }
    else
    {
        printf("Maximum = %d\n", *b);
        printf("Minimum = %d\n", *a);
    }
}

int main()
{
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    maxmin(&x, &y);

    return 0;
}
