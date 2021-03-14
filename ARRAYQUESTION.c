#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

///FOR LOOP
int main()
{

    char student_name[50], unit_name[10], unit_code[10], grade, std_dep, std_course;
    int cat1, cat2, total_marks, exam_marks, student_reg, n, x;

    int key;

    printf("Enter");
    scanf("%d", &key);

    do
    {
        printf("Welcome to Sunshine our Academic Management System (AMS)\n");
        printf("1 Create new student\n");
        printf("2 Register student\n");
        printf("3 Key in Student Marks\n");
        printf("4 Print student progressive\n");
        printf("5 Exit\n");
    } while (key != 5);

    switch (key)
    {
    case 1:
        printf("Enter student name: ");
        scanf("%s", &student_name);
        printf("Enter student registration number: ");
        scanf("%d", &student_reg);
        printf("Enter student Department: ");
        scanf("%s", &std_dep);
        printf("Enter student Student Course: ");
        scanf("%s", &std_course);

        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        break;

    case 5:
        exit(0);
    }

    return 0;
}