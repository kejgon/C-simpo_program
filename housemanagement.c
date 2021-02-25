#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

///////////// if , else if

#define WATER_DEP 1500
#define ELECT_DEP 2500

int main()
{
    char house_name[50], house_owner[40], house_location[40], house_type[10];
    int house_rent, total_rent, house_dep;

    printf("Enter House Location. \n");
    scanf("%s", &house_location);
    printf("Enter House Type. \n");
    scanf("%s", &house_type);
    printf("Enter House rent. \n");
    scanf("%d", &house_rent);

    house_dep = house_rent;
    total_rent = house_rent + WATER_DEP + ELECT_DEP;
    // MAKING COMPARISON
    if (strcmp(house_location, "JAMHURI") == 0 && strcmp(house_type, "SINGLE") == 0)
    {
        //Assigning
        strcpy(house_name, "Valley");
        strcpy(house_owner, "Peter");

        printf("\n\n______________________________________\n\n");
        printf("House name : %s\n", &house_name);
        printf("house owner : %s\n", &house_owner);
        printf("house rent price : %d\n", &house_rent);
        printf("house deposit : %d\n", &house_dep);
        printf("house water deposit : %d\n", WATER_DEP);
        printf("house electricity deposit : %d\n", ELECT_DEP);
        printf("house Total Rent : %d\n", &total_rent);
        printf("______________________________________\n\n");
    }

    else if (strcmp(house_location, "KAREN") == 0 && strcmp(house_type, "DOUBLE") == 0)
    {
        strcpy(house_name, "Main House");
        strcpy(house_owner, "Patrick");

        printf("\n\n______________________________________\n\n");
        printf("House name : %s\n", &house_name);
        printf("house owner : %s\n", &house_owner);
        printf("house rent price : %d\n", &house_rent);
        printf("house deposit : %d\n", &house_dep);
        printf("house water deposit : %d\n", WATER_DEP);
        printf("house electricity deposit : %d\n", ELECT_DEP);
        printf("house Total Rent : %d\n", &total_rent);
        printf("______________________________________\n\n");
    }
    else
    {
        printf("No house matches the criteria");
    }

    return 0;
}
