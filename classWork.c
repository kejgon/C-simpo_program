#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

///////////// if , else if

int main()
{

    int marks;

    printf("Enter Student marks?\n");
    scanf("%d", &marks);

    if (marks >= 50)
    {
        printf("The student has passed.");
    }
    else
    {
        printf("The student has failed.");
    }
    return 0;
}

// int main()
// {

//     int num;

//     printf("Enter any number?\n");
//     scanf("%d", &num);

//     if (num % 2 == 1)
//     {
//         printf("%d => Is an ODD number.", num);
//     }
//     else
//     {
//         printf("%d => Is an EVEN number. ", num);
//     }
//     return 0;
// }

// int main()
// {
//     char gender;
//     double b;
//     float c;
//     int a;
//     bool d;

//     printf("\n\n\n__________________________________\n");
//     printf("The number of Byte for each variabl :\n ");
//     printf("__________________________________\n");
//     printf("Character occupies %d bytes\n ", sizeof(gender));
//     printf("Double occupied %d bytes\n ", sizeof(b));
//     printf("Float occupies %d bytes \n ", sizeof(c));
//     printf("Integer occupies %d bytes \n", sizeof(a));
//     printf("Boolean occupies %d bytes \n", sizeof(d));

//     printf("\n");
//     printf("________________________\n");
//     printf("Display memory location :\n");
//     printf("________________________\n");
//     printf("Gender :  %d\n", &gender);
//     printf("Double : %d\n", &b);
//     printf("Float : %d\n", &c);
//     printf("Integer :  %d\n", &a);
//     printf("Boolean :  %d\n", &d);

//     return 0;
// }