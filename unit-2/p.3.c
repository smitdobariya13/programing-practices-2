//Sort above data by name.
#include <stdio.h>
#include <string.h>

int main()
{
    char names[5][50] = {"John", "Alice", "David", "Bob", "Charlie"};
    int i, j;
    char temp[50];


    for (i = 0; i < 5 - 1; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (strcmp(names[i], names[j]) > 0)
            {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    printf("Sorted names:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%s\n", names[i]);
    }

    return 0;
}
