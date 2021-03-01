#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

////--------------------------

///SWITCH

int main()
{
    int j = 0;
    while (j > 4)
        ;
    {
        printf("%d\n", j);
        j++;
    }
}

// int main()
// {

//     char grade = 'p';
//     switch (grade)
//     {
//     case 'A':
//         printf("Super");
//         break;

//     case 'B':
//         printf("Good");
//         break;

//     case 'C':
//         printf("You could do better");
//         break;

//     case 'D':
//         printf("you love the D");
//         break;

//     default:
//         printf("Please check your grades");
//     }

//     return 0;
// }

// // For LOOP
// int main()
// {
//     // continue with do while

//     int num = 1;

//     do
//     {
//         if (num == 4 || num == 8)
//         {
//             num++;
//             continue;
//         }
//         printf("%d is avaible \n", num);
//         num++;

//     } while (num <= 10);

//     return 0;
// }

// int main()
// {
//     //loops with break
//     int a;
//     int howMany;
//     int maxAmount = 10;

//     printf("How many time do you want the loop to loop? (up to 10)");
//     scanf("%d", &howMany);

//     for (a = 1; a <= maxAmount; a++)
//     {
//         printf("%d\n", a);

//         if (a == howMany)
//         {
//             break;
//         }
//     }

//     return 0;
// }
// int main()
// {

//     int column, row;

//     for (row = 1; row <= 6; row++)
//     {

//         for (column = 1; column <= 5; column++)
//         {

//             printf("| %d  ", column);
//         }

//         printf("\n");
//         printf("_________________________\n");
//     }

//     return 0;
// }
// int main()
// {
//     int bacon;
//     for (bacon = 1; bacon <= 25; bacon += 2)
//     {
//         printf("Bacon is : %d\n", bacon);
//     }

//     return 0;
// }

// DO WHILE LOOP
// int main()
// {
//     float grade = 0;
//     float scoreEntered = 0;
//     float numberOfTests = 0;
//     float average = 0;

//     printf("Press 0 when complete.  \n\n");

//     do
//     {
//         printf("Test : %.0f \t Average : %.2f \n", numberOfTests, average);
//         printf("Enter test score? ");
//         scanf("%f", &scoreEntered);
//         grade += scoreEntered;
//         numberOfTests++;

//         average = grade - numberOfTests;

//     } while (scoreEntered != 0);
//     return 0;
// }

/////WHILE LOOP
// int main()
// {

//     int day = 1;
//     float amount = .01;

//     while (day <= 31)
//     {
//         printf("Day : %d\t\t Amount: $%.2f \n", day, amount);
//         amount *= 2;
//         day++;
//     }
//     return 0;
// }
// int main()
// {

//     int tuna = 0;
//     while (tuna < 5)
//     {
//         printf("Tuna is now : %d\n", tuna);
//         tuna++;
//     }

//     return 0;
// }