#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

////--------------------------

// while
int main()
{
    int j = 99, sum = 0, avg = 0, count = 0;

    while (j >= 1)
    {
        if (j % 2 == 0)
        {
            printf("%d\t", j);

            count++;
            sum += j;
        }

        j--;
    }

    avg = sum / count;

    printf("\nThe sum of the ODDS numbers : %d\n", sum);
    printf("The average : %d\n", avg);
}

// ///Do while
// int main()
// {
//     int j = 100, sum = 0, avg = 0, count = 0;

//     do
//     {
//         if (j % 2 == 1)
//         {
//             printf("%d\t", j);

//             count++;
//             sum += j;
//         }

//         j--;
//     } while (j >= 2);

//     avg = sum / count;

//     printf("\nThe sum of the ODDS numbers : %d\n", sum);
//     printf("The average : %d\n", avg);
// }
