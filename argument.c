#include <stdio.h>
#include <stdlib.h>

void convertToDollars(float euro);

int main()
{
    float euroPrice = 1.00;
    float euroPrice1 = 100.00;
    float euroPrice2 = 5.00;
    convertToDollars(euroPrice);
    convertToDollars(euroPrice1);
    convertToDollars(euroPrice2);
    convertToDollars(50.00);
    return 0;
}
//void means return nothing
void convertToDollars(float euro)
{
    float usd = euro * 1.37;
    printf("%.2f Euros - %.2f USD\n", euro, usd);
    return;
}