//Sort above data by score in descending order.
#include <stdio.h>
#include <string.h>

struct Student
{
    char name[50];
    int score;
};

int main()
{
    struct Student s[4] =
    {
        {"John", 85},
        {"Alice", 92},
        {"Bob", 78},
        {"David", 88}
    };

    struct Student temp;
    int i, j;


    for (i = 0; i < 4 - 1; i++)
    {
        for (j = i + 1; j < 4; j++)
        {
            if (s[i].score < s[j].score)
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    printf("Sorted by score (Descending):\n");
    for (i = 0; i < 4; i++)
    {
        printf("%s - %d\n", s[i].name, s[i].score);
    }

    return 0;
}
