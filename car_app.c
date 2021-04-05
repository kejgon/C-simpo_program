#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
void addCare();
void findCar();
bool search(char[], char[], char[], char[]);
void display();
void exitMenu();

char c_name[40], c_Type[40], c_Make[40], c_Esize[10], c_Model[40];
double c_Price;
bool status;

void addCare()
{
    printf("=>\tEnter the car name.\n");
    scanf("%s", c_name);
    printf("=>\tEnter the car type.\n");
    scanf("%s", c_Type);
    printf("=>\tEnter the car make.\n");
    scanf("%s", c_Make);
    printf("=>\tEnter the car model.\n");
    scanf("%s", c_Model);
    printf("=>\tEnter the car engine size.\n");
    scanf("%s", c_Esize);
    printf("=>\tEnter the car price.\n");
    scanf("%lf", &c_Price);
}

void findCar()
{
    printf("=>\tEnter the car body type.\n");
    scanf("%s", c_Type);
    printf("=>\tEnter the car make.\n");
    scanf("%s", c_Make);
    printf("=>\tEnter the car engine size.\n");
    scanf("%s", c_Esize);
    printf("=>\tEnter the car model.\n");
    scanf("%s", c_Model);

    // CALLING SEARCH
    status = search(c_Type, c_Make, c_Esize, c_Model);
}

bool search(char type[40], char make[40], char eSize[], char model[40])
{

    if (strcmp(type, "Truck") == 0 && strcmp(make, "Toyota") == 0 && strcmp(eSize, "2000cc") == 0 && strcmp(model, "xseries") == 0)
    {
        status = true;
    }
    else
    {
        status = false;
    }

    return status;
}

void display()
{
    if (status)
    {
        printf("Car name : %s\n", c_name);
        printf("Car price : %.2lf\n", c_Price);
    }
    else
    {
        printf("Sorry, the car is not available.\n");
    }
}

void exitMenu()
{
    exit(0);
}
int main()
{
    int key;
    do
    {
        printf("*****************************************\n");
        printf("*\tURBAN CAR SELLING APP\t\t*\n");
        printf("*****************************************\n");
        printf("*\t1. Add a new car.\n");
        printf("*\t2. Find a car.\n");
        printf("*\t3. Display cars.\n");
        printf("*\t4. Exit.\n");
        printf("\n\n");
        printf("*\tMake a selection:\n");
        scanf("%d", &key);

        switch (key)
        {
        case 1:
            printf("\n\n");
            printf(" ADD A NEW CAR.\n");
            addCare();

            break;
        case 2:
            printf("\n\n");
            printf(" FIND A CAR.\n");
            findCar();
            break;

        case 3:
            printf("\n\n");
            printf("Display cars.\n");
            display();
            break;

        case 4:
            //EXIT
            exitMenu();
            break;
        }
    } while (key != 4);
}
