//Write a function to print names of students whose grade is greater than 5.0.
#include <stdio.h>


typedef struct
{
    char name[50];
    float grade;
} Student;


void printHighAchievers(Student students[], int size)
{
    printf("Students with grades greater than 5.0:\n");
    printf("--------------------------------------\n");

    int found = 0;
    for (int i = 0; i < size; i++)
    {
        if (students[i].grade > 5.0)
        {
            printf("Name: %-15s | Grade: %.1f\n", students[i].name, students[i].grade);
            found = 1;
        }
    }

    if (!found)
    {
        printf("No students found with a grade above 5.0.\n");
    }
}

int main()
{

    Student classList[] =
    {
        {"Alice", 8.5},
        {"Bob", 4.2},
        {"Charlie", 5.0},
        {"Diana", 9.1},
        {"Ethan", 3.8}
    };

    int size = sizeof(classList) / sizeof(classList[0]);


    printHighAchievers(classList, size);

    return 0;
}
