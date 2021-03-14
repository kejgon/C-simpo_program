#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

///FOR LOOP
int main()
{
    char student_name[50], unit_name[10], unit_code[10], grade;
    int cat1, cat2, total_marks, exam_marks, student_reg, n, x;

    printf("\nHow many Students?\n");
    scanf("%d", &n);

    for (x = 0; x < n; x++)
    {
        printf("\nEnter student number %d infos: \n ", x + 1);

        printf("Enter student name: ");
        scanf("%s", &student_name);
        printf("Enter student registration number: ");
        scanf("%d", &student_reg);
        printf("Enter Unitname ");
        scanf("%s", &unit_name);
        printf("Enter unit code: ");
        scanf("%s", &unit_code);
        printf("Enter cat 1 marks: ");
        scanf("%d", &cat1);
        printf("Enter cat 2 marks: ");
        scanf("%d", &cat2);
        printf("Enter exam marks: ");
        scanf("%d", &exam_marks);

        total_marks = cat1 + cat2 + exam_marks;

        if (total_marks < 0 && total_marks > 100)
        {
            printf("Invalid total_marks");
        }
        else if (total_marks >= 70 && total_marks < 100)
        {
            grade = 'A';
        }
        else if (total_marks >= 60 && total_marks <= 69)
        {
            grade = 'B';
        }
        else if (total_marks >= 50 && total_marks <= 59)
        {
            grade = 'C';
        }
        else if (total_marks >= 40 && total_marks <= 49)
        {
            grade = 'D';
        }
        else if (total_marks >= 0 && total_marks <= 39)
        {
            grade = 'F';
        }

        printf("______________________________________________________________________________________________________________________________________________________\n");
        printf("| Student Reg\t| Student Name\t| Unit Name\t| Unit Code\t|\tCat 1\t|\tCat 2\t| Exam Marks\t| Total Marks\t|\tGrade\t|\n");
        printf("|______________________________________________________________________________________________________________________________________________________|\n");
        printf("|\t%d\t|\t%s\t|\t%s\t|\t%s\t|\t%d\t|\t%d\t|\t%d\t|\t%d\t|\t%c\t|\n", student_reg, student_name, unit_name, unit_code, cat1, cat2, exam_marks, total_marks, grade);
        printf("|______________________________________________________________________________________________________________________________________________________|\n\n\n");
    }
    //     printf("student name: %s\n", student_name);
    //     printf("student registration : %d\n", student_reg);
    //     printf("unit name : %s\n", unit_name);
    //     printf("unite code : %s\n", unit_code);
    //     printf("cat1 marks :%d\n", cat1);
    //     printf("cat2 marks :%d\n", cat2);
    //     printf("exam marks : %d\n", exam_marks);
    //     printf("Total marks : %d\n", total_marks);
    //     printf("Student grade : %c", grade);
    // }

    return 0;
}