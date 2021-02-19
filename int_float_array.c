#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{

    int i;
    int meatballs[5];
    int totalMeatballs = 0;

    for (i = 0; i < 5; i++)
    {

        printf("How many meatballs did you eat on  day %d? \n", i + 1);
        scanf("%d", &meatballs[i]);
    }
    for (i = 0; i < 5; i++)
    {

        totalMeatballs += meatballs[i];
    }

    int avg = totalMeatballs / 5;

    printf("\n You ate %d meatballs total, that's an average of %d per day.\n", totalMeatballs, avg);

    return 0;
}