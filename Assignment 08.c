// Developer : Faith Ansah and Alexis Graham
//  Homework 8

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct course
{
    char department[15];
    int courseNumber;
    char course_title[30];
    short credits;
};

typedef struct course Course;

void printCourse(Course *c);
void inputCourse(Course *c);
void printCourseRow(Course *c);
void inputAllCourses(Course *array[], int size);
void printAllCourses(Course *array[], int size);

int main()
{
    Course c1;
    inputCourse(&c1);
    printCourse(&c1);
}

// Exercise 02
void inputCourse(Course *c)
{

    printf("Enter department: ");
    fgets(c->department, 15, stdin);
    printf("Enter course title: ");
    fgets(c->course_title, 30, stdin);
    printf("Enter course number: ");
    scanf("%d", &(c->courseNumber));
    printf("Enter credits: ");
    scanf("%hi", &(c->credits));
}

// Exercise 03
void printCourse(Course *c)
{
    printf("\n");
    printf("Department: %s", c->department);
    printf("Course number: %d\n", c->courseNumber);
    printf("Course title: %s", c->course_title);
    printf("Credits: %hu", c->credits);
}
