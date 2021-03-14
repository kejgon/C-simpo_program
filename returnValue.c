#include <stdio.h>
#include <stdlib.h>

int calBonus(int yearsWorked);

int main()
{
    int kjBouns = calBonus(15);
    int janeBouns = calBonus(3);
    printf("Kj bouns is : $%d\n", kjBouns);
    printf("Jane bouns is : $%d", janeBouns);

    return 0;
}

int calBonus(int yearsWorked)
{
    int bouns = yearsWorked * 250;
    if (yearsWorked > 10)
    {
        bouns += 1000;
    }
    return bouns;
}