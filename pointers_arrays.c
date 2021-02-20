#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{

    int i;
    int meatBalls[5] = {7, 6, 97, 54, 4};

    printf("Element \t Address \t Value \n");

    for (i = 0; i < 5; i++)
    {
        printf("MeatBalls[%d] \t %p \t %d \n", i, &meatBalls[i], meatBalls[i]);
    }

    // arrays names are just pointers to the first element
    printf("\n\nMeatBalls \t\t %p", meatBalls);

    // Dereference
    printf("\n\n*MeatBalls \t\t %d", *meatBalls);
    printf("\n\n*(MeatBalls+2) \t\t %d", *(meatBalls + 3));

    return 0;
}