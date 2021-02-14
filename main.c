#include <stdio.h>

int main()
{
    int marks, reg_num;
    char unit_code[8], grade, unit_name[20], student_name[50];

    printf("Enter your registration number. \n");
    scanf("%d", &reg_num);
    printf("Enter your name. \n");
    scanf("%s", &student_name);
    printf("Enter unit code. \n");
    scanf("%s", &unit_code);
    printf("Enter unit name. \n");
    scanf("%s", &unit_name);
    printf("Enter your marks. \n");
    scanf("%d", &marks);
    printf("\n\n\n\n");

    if (marks < 0 && marks > 100)
    {
        printf("Invalid marks");
    }
    else if (marks >= 70 && marks < 100)
    {
        grade = 'A';
    }
    else if (marks >= 60 && marks <= 69)
    {
        grade = 'B';
    }
    else if (marks >= 50 && marks <= 59)
    {
        grade = 'C';
    }
    else if (marks >= 40 && marks <= 49)
    {
        grade = 'D';
    }
    else
    {
        grade = 'F';
    }

    printf("_________________________________________________________________\n");
    printf("|\tStudent name\t\t\t | \t%s \t\t|\n", student_name);
    printf("|\tRegistration number\t\t |\t%d\t\t|\n", reg_num);
    printf("|\tUnit code\t\t\t |\t%s\t\t|\n", unit_code);
    printf("|\tUnit name\t\t\t |\t%s     |\n", unit_name);
    printf("|\tMarks\t\t\t\t |\t%d \t\t|\n", marks);
    printf("|\tGarde\t\t\t\t |\t%c \t\t| \n", grade);
    printf("_________________________________________________________________");

    return 0;
}