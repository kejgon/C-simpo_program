#include <stdio.h>
#include <math.h>

//Write a C program that calculate th amount sommeone is earn after invensting a principal amount

//Define a constant rate
#define RATE 0.135

int main()
{
    float principal, amount;
    int num_years;

    printf("Enter th principle amount \n");
    scanf("%f", &principal);

    printf("Enter the number of years \n");
    scanf("%d", &num_years);

    //Compute the Amount

    amount = principal * pow(1 + RATE, num_years);

    printf("\n\n\n");
    printf("The amount to be earn after years %d\n from principal %f\n amount is %.2f", num_years, principal, amount);

    return 0;
}