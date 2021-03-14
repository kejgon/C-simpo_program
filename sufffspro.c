#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

///FOR LOOP
int main()
{
    int n, staff_num, x;
    double paye;
    char staff_name[40], dep[25];

    printf("How many staff?\n");
    scanf("%d", &n);

    for (x = 0; x < n; x++)
    {

        printf("Information about %d\t staff", x + 1);
        printf("Enter staff number?\n");
        scanf("%d", &staff_num);
        printf("Enter staff name?\n");
        scanf("%s", &staff_name);
        printf("Enter staff department?\n");
        scanf("%s", &dep);
        printf("Enter staff payee?\n");
        scanf("%lf", &paye);
        printf("________________________________________________________________________________________________\n");
        printf("|\tStaff Number\t|\tStaff Name\t|\tDepartment\t|\tPayee\t\t|\n");
        printf("|_______________________________________________________________________________________________|\n");
        printf("|\t%d\t\t|\t%s\t\t|\t%s\t\t|\t%.2lf\t\t|\n", staff_num, staff_name, dep, paye);
        printf("|_______________________________________________________________________________________________|\n\n\n");
    }

    return 0;
}

// ///WHILE
// int main()
// {
//     int n, staff_num, x = 0;
//     double paye;
//     char staff_name[40], dep[25];

//     printf("How many staff?\n");
//     scanf("%d", &n);

//     while (n > x)
//     {

//         printf("Information about %d\t staff", x + 1);
//         printf("Enter staff number?\n");
//         scanf("%d", &staff_num);
//         printf("Enter staff name?\n");
//         scanf("%s", &staff_name);
//         printf("Enter staff department?\n");
//         scanf("%s", &dep);
//         printf("Enter staff payee?\n");
//         scanf("%lf", &paye);
//         x++;

//         printf("________________________________________________________________________________________________\n");
//         printf("|\tStaff Number\t|\tStaff Name\t|\tDepartment\t|\tPayee\t\t|\n");
//         printf("|_______________________________________________________________________________________________|\n");
//         printf("|\t%d\t\t|\t%s\t\t|\t%s\t\t|\t%.2lf\t|\n", staff_num, staff_name, dep, paye);
//     }

//     return 0;
// }

// ///DO WHILE
// int main()
// {
//     int n, staff_num, x = 0;
//     double paye;
//     char staff_name[40], dep[25];

//     printf("How many staff?\n");
//     scanf("%d", &n);

//     do
//     {

//         printf("Information about %d\t staff", x + 1);
//         printf("Enter staff number?\n");
//         scanf("%d", &staff_num);
//         printf("Enter staff name?\n");
//         scanf("%s", &staff_name);
//         printf("Enter staff department?\n");
//         scanf("%s", &dep);
//         printf("Enter staff payee?\n");
//         scanf("%lf", &paye);
//         x++;

//         printf("________________________________________________________________________________________________\n");
//         printf("|\tStaff Number\t|\tStaff Name\t|\tDepartment\t|\tPayee\t\t|\n");
//         printf("|_______________________________________________________________________________________________|\n");
//         printf("|\t%d\t\t|\t%s\t\t|\t%s\t\t|\t%lf\t|\n", staff_num, staff_name, dep, paye);

//     } while (n > x);

//     return 0;
// }