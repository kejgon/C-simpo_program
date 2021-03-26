#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    char student_name[50], std_dep[50], std_course[n][50];
    int student_reg[n];
    //int n, x, units;

    // int day[n], month[n], year[n], semester[n];
    //int cats[n], project_marks[n], attendance_mark[n], exam_marks[n], total_marks[n];
    // char unit_name[n][10], unit_code[n][10], grade[n], remarks[n][50];

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

            printf("How many Students?\n");
            scanf("%d", &n);

            for (int i = 0; i < n; i++)
            {

                printf("Enter student number %d infos: \n", i + 1);
                printf("Enter Student Name:\n");
                scanf("%s", &student_name[i]);
                printf("Enter Student Registration Number:\n");
                scanf("%d", &student_reg[i]);
                printf("Enter Student Department:\n");
                scanf("%s", &std_dep[i]);
                printf("Enter Student Course:\n");
                scanf("%s", &std_course[i]);
            }
            for (int s = 0; s < n; s++)
            {

                printf("Registration Number : %d\n", student_reg[s]);
                printf("Full Name : %s\n", student_name[s]);
                printf("Department : %s\n", std_dep[s]);
                printf("Program  : %s\n", std_course[s]);
            }

            break;
        case 2:

            printf("*****************************************\n");
            printf("****** REGISTER STUDENT ACADEMIC ********\n");
            printf("*****************************************\n");

            break;
        case 3:
            printf("****************************************\n");
            printf("***********  STUDENT MARKS  ************\n");
            printf("****************************************\n");

            break;
        case 4:
            printf("****************************************\n");
            printf("*********  STUDENTS PROGRESS  **********\n");
            printf("****************************************\n\n");

            // for (int s = 0; s < n; s++)
            // {
            //     printf("+++++++++++++++++++++++++++++++++++++++++++++++\n");
            //     printf(" STUDENT TRANSCRIPT                            \n");
            //     printf(" SUNSHINE COLLEGE INTERNATIONAL                \n");
            //     printf("+++++++++++++++++++++++++++++++++++++++++++++++\n");
            //     printf("Registration Number : %d\n", student_reg[s]);
            //     printf("Full Name : %s\n", student_name[s]);
            //     printf("Department : %s\n", std_dep[s]);
            //     //  printf("Academic Year: %d/%d/%d\t Semester : %d\n", day[i], month[i], year[i], semester[i]);
            //     printf("Program  : %s\n", std_course[s]);
            //     //  printf("Unit Code | Unit Name | Cat(x/15) | Attendance(x/5) | Project(x/25) | Exam(x/60) | Average(x/100) | Grade | Remarks |\n");

            //     //  for (int u = 0; u < units; u++)
            //     //  {
            //     //  printf(" %s\t%s\t%d\t%d\t%d\t%d\t%d\t%c\t%s\n", unit_code[u], unit_name[u], cats[u], attendance_mark[u], project_marks[u], exam_marks[u], total_marks[u], grade[u], remarks[u]);
            //     // }

            //     printf("\n\n");
        }

        break;

    case 5:
        exit(0);
    }
}
while (key != 5)
    ;

return 0;
}
