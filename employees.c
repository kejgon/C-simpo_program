#include <stdio.h>

int main()
{

    double basic_Pay, house_allowance, travelling_allowance, gross, tax, net_Pay;

    printf("Enter basic pay \n");
    scanf("%lf", &basic_Pay);
    printf("Enter house allowance \n");
    scanf("%lf", &house_allowance);
    printf("Enter travelling allowance \n");
    scanf("%lf", &travelling_allowance);

    gross = basic_Pay + house_allowance + travelling_allowance;

    if (gross <= 24000)
    {
        tax = 0;
    }
    else if (gross > 24000 && gross <= 32000)
    {

        tax = 0.15 * gross;
    }
    else if (gross > 32000 && gross <= 50000)
    {
        tax = 0.2 * gross;
    }
    else if (gross > 52000 && gross <= 100000)
    {
        tax = 0.25 * gross;
    }
    else if (gross > 100000)
    {
        tax = 0.3 * gross;
    }

    net_Pay = gross - tax;
    printf("\n\n\n\n");
    printf("_____________________________________________________________\n");
    printf("|Gross \t\t\t|Tax\t\t\t|Net Pay   |\n");
    printf("_____________________________________________________________\n");
    printf("|%.2lf\t\t|%.2lf\t\t|%.2lf |\n\n\n", gross, tax, net_Pay);

    return 0;
}