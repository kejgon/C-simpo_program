
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

int main()
{

    int marks[5] = {70, 55, 66, 60, 34};
    char grade[5], comments[20][10];

    int i;
    for (i = 0; i < 6; i++)
    {
        if (marks[i] >= 70 && marks[i] <= 100)
        {

            grade[i] = 'A';
            strcpy(comments[i], "EXCELLENT");
        }
        else if (marks[i] >= 60 && marks[i] <= 69)
        {

            grade[i] = 'B';
            strcpy(comments[i], "VERY GOOD");
        }
        else if (marks[i] >= 50 && marks[i] <= 59)
        {

            grade[i] = 'C';
            strcpy(comments[i], "GOOD");
        }
        else if (marks[i] >= 40 && marks[i] <= 49)
        {

            grade[i] = 'D';
            strcpy(comments[i], "PASS");
        }
        else
        {

            grade[i] = 'F';
            strcpy(comments[i], "FAIL");
        }
    }

    //***DISPLAY
    printf("#\t\tMarks\t\tGrade\t\tcomments\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d\t\t%d\t\t%c\t\t%s\n", i + 1, marks[i], grade[i], comments[i]);
    }
    return 0;
}