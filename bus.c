#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
bool FIND_BUS(char[], char[], char[]);

char bus_name[40], distination[40], date[40], dep_time[10], fare[40], bus_registration[40];

bool status;

bool FIND_BUS(char dist[40], char dep_t[40], char date[40])
{
    if (strcmp(dist, "Nairobi") == 0 && strcmp(dep_t, "6:00AM") == 0 && strcmp(date, "7th") == 0)
    {
        strcpy(bus_name, "SIMBA");
        strcpy(bus_registration, "KLG2023");
        strcpy(fare, "2500 KSH");
        printf("The bus name : %s\n", bus_name);
        printf("Bus registration : %s\n", bus_registration);
        printf("Bus fare : %s\n", fare);
    }
    else
    {
        printf("Sorry, no bus is available.\n");
    }
    return status;
}

void main()
{
    strcpy(distination, "Nairobi");
    strcpy(dep_time, "6:00AM");
    strcpy(date, "7th");

    FIND_BUS(distination, dep_time, date);
}
