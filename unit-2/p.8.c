//Demonstrate difference between structure and union.
#include <stdio.h>

struct Student
{
    int roll;
    float marks;
    char grade;
};

int main()
{
    struct Student s1 = {1, 85.5, 'A'};

    printf("Roll: %d\n", s1.roll);
    printf("Marks: %.2f\n", s1.marks);
    printf("Grade: %c\n", s1.grade);

    printf("Size of structure: %lu", sizeof(s1));
    return 0;
}
