//Write a function to print data of all students who joined in 2019.
#include <stdio.h>


typedef struct
{
    char name[50];
    int joinYear;
    float grade;
} Student;


void printStudentsByYear(Student students[], int size, int targetYear)
{
    printf("Students who joined in %d:\n", targetYear);
    printf("====================================\n");

    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (students[i].joinYear == targetYear)
        {
            printf("Name: %-15s | Grade: %.1f\n", students[i].name, students[i].grade);
            count++;
        }
    }

    if (count == 0)
    {
        printf("No records found for the year %d.\n", targetYear);
    } else
    {
        printf("------------------------------------\n");
        printf("Total found: %d\n", count);
    }
}

int main()
{

    Student database[] =
    {
        {"James", 2019, 8.2},
        {"Sarah", 2020, 9.0},
        {"Robert", 2019, 7.5},
        {"Linda", 2018, 6.4},
        {"Michael", 2019, 5.5}
    };

    int size = sizeof(database) / sizeof(database[0]);


    printStudentsByYear(database, size, 2019);

    return 0;
}


