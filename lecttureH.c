#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

///////////// if , else if

int main()
{
    char lec_name[50], hall_name[40], day[40], time[10], u_code[5], unit_name[50];

    printf("Enter hall name. \n");
    scanf("%s", &hall_name);
    printf("Enter time of the day. \n");
    scanf("%s", &time);
    printf("Enter day of the week. \n");
    scanf("%s", &day);

    // MAKING COMPARISON
    if (strcmp(hall_name, "THLAB") == 0 && strcmp(time, "8:00") == 0 && strcmp(day, "Monday") == 0)
    {
        //Assigning
        strcpy(lec_name, "Phile");
        strcpy(unit_name, "Programming");
        strcpy(u_code, "CMT110");

        printf("\n\n______________________________________\n\n");
        printf("Unit Code : %s\n", &u_code);
        printf("Unite Name : %s\n", &unit_name);
        printf("Lecture Name: %s\n", &lec_name);
        printf("______________________________________\n\n");
    }
    else if (strcmp(hall_name, "OH21") == 0 && strcmp(time, "2:00") == 0 && strcmp(day, "Tuesday") == 0)
    {
        strcpy(lec_name, "Sam");
        strcpy(unit_name, "Database ");
        strcpy(u_code, "CMT210");

        printf("\n\n______________________________________\n\n");
        printf("Unit Code : %s\n", &u_code);
        printf("Unite Name : %s\n", &unit_name);
        printf("Lecture Name: %s\n", &lec_name);
        printf("______________________________________\n\n");
    }
    else if (strcmp(hall_name, "TH1") == 0 && strcmp(time, "11:00") == 0 && strcmp(day, "Friday") == 0)
    {
        strcpy(lec_name, "Kamau");
        strcpy(unit_name, "Object Oriented programming ");
        strcpy(u_code, "CMT310");

        printf("\n\n______________________________________\n\n");
        printf("Unit Code : %s\n", &u_code);
        printf("Unite Name : %s\n", &unit_name);
        printf("Lecture Name: %s\n", &lec_name);
        printf("______________________________________\n\n");
    }
    else
    {
        printf("You are free today.");
    }

    return 0;
}
