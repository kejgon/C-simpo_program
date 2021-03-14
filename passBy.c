#include <stdio.h>
#include <stdlib.h>

void passByValue(int i);
void passByAddress(int *i);

int main()
{
    int tuna = 40;
    passByValue(tuna);
    printf("pass by Value : %d\n", tuna);
    passByAddress(&tuna);
    printf("pass by Address : %d\n", tuna);

    return 0;
}

void passByValue(int i)
{
    i = 99;
    return;
}
void passByAddress(int *i)
{
    *i = 50;
    return;
}