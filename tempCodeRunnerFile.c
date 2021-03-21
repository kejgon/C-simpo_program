#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

///FOR LOOP
int main()
{
    int n, i, x, units;

    char student_name[n][50], unit_name[n][10], unit_code[n][10], std_dep[n][50], std_course[n][50];
    int student_reg[n][100];
    int day[n][10], month[n][10], year[n][20], semester[n][100];
    int cats[n], project_marks[n], attendance_mark[n], exam_marks[n], total_marks[n];

    int key;
    printf("Enter");
    do
    {
        printf("Welcome to Sunshine our Academic Management System (AMS)\n");
        printf("1 Create new student.\n");
        printf("2 Register student.\n");
        printf("3 Key in Student Marks.\n");
        printf("4 Print student progressive.\n");
        printf("5 Exit.\n");
        printf("\n\n\n");
        printf("Enter your choice according to your choice!!\n");
        scanf("%d", &key);

        switch (key)
        {
        case 1:
            printf("****************************************\n");
            printf("********** CREATE NEW STUDENT **********\n");
            printf("****************************************\n");

            printf("\nHow many Students?\n");
            scanf("%d", &n);

            for (i = 0; i < n; i++)
            {
                printf("\n");
                printf("Enter student number %d infos: \n ", i + 1);
                printf("Enter Student Name:\n");
                scanf("%s", &student_name[i]);
                printf("Enter Student Registration Number:\n");
                scanf("%d", &student_reg[i]);
                printf("Enter Student Department:\n");
                scanf("%s", &std_dep[i]);
                printf("Enter Student Course:\n");
                scanf("%s", &std_course[i]);
            }
            break;
        case 2:

            printf("*****************************************\n");
            printf("****** REGISTER STUDENT ACADEMIC ********\n");
            printf("*****************************************\n");
            for (i = 0; i < n; i++)
            {
                printf("\n");
                printf("Enter student %d Academic year and semester.\n\n", i + 1);
                printf("Enter the academic year?\n");
                printf("Day : ");
                scanf("%d", &day[i]);
                printf("Month : ");
                scanf("%d", &month[i]);
                printf("year : ");
                scanf("%d", &year[i]);
                printf("\n");
                printf("Enter the Semester.\n");
                scanf("%d", &semester[i]);
            }
            break;
        case 3:
            printf("****************************************\n");
            printf("***********  STUDENT MARKS  ************\n");
            printf("****************************************\n");
            for (i = 0; i < n; i++)
            {
                printf("Enter student %d MARKS.\n ", i + 1);
                printf("\Enter the number of units?\n");
                scanf("%d", &units);
                if (units >= 3 && units <= 7)
                {
                    for (int u = 0; u < units; u++)
                    {
                        printf("ENTER UNIT %d MARKS.\n", u + 1);
                        printf("Enter cat marks.\n");
                        scanf("%d", &cats[u]);
                        printf("Enter Project marks.\n");
                        scanf("%d", &project_marks[u]);
                        printf("Enter Attendance Marks.\n");
                        scanf("%d", &attendance_mark[u]);
                        printf("Enter Exam marks.\n");
                        scanf("%d", &exam_marks[u]);

                        total_marks[u] = cats[u] + project_marks[u] + attendance_mark[u] + exam_marks[u];
                        printf("Total Exam : %d", total_marks[u]);
                    }
                }
                else
                {
                    printf("You are only allowed to do Minimum of 3 & Maximum of 7 units.\n");
                }
            }

            break;
        case 4:
            printf("****************************************\n");
            printf("*********  STUDENTS PROGRESS  **********\n");
            printf("****************************************\n");

            break;

        case 5:
            exit(0);
        }

    } while (key != 5);

    return 0;
}
