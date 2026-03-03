//Design a structure named student to store data about student which contains following data element :
//Write a program to input data and display data.

#include <stdio.h>
#include <string.h>

struct student
{
    int rollno;
    char name[20];
    char department[40];
    int year_of_joining;
    float score;
};

int main()
{
    struct student s;


    printf("Enter Roll Number: ");
    scanf("%d", &s.rollno);

    printf("Enter Name: ");
    scanf(" %[^\n]", s.name);

    printf("Enter Department: ");
    scanf(" %[^\n]", s.department);

    printf("Enter Year of Joining: ");
    scanf("%d", &s.year_of_joining);

    printf("Enter Score: ");
    scanf("%f", &s.score);


    printf("\n--- Student Details ---\n");
    printf("Roll Number      : %d\n", s.rollno);
    printf("Name             : %s\n", s.name);
    printf("Department       : %s\n", s.department);
    printf("Year of Joining  : %d\n", s.year_of_joining);
    printf("Score            : %.2f\n", s.score);

    return 0;
}

