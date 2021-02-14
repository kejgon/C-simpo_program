#include <stdio.h>

#define NSSF 320.0
#define NHIF 1700.0
#define SERVICE_CHARGES 120.0

int main()
{
    const double FIXED_PAY = 40000;
    double over_pay, gross, paye, net_pay;
    int hours;

    printf("Enter your working hours \n");
    scanf("%d", &hours);

    if (hours >= 0 && hours <= 3)
    {
        over_pay = hours * 1000;
    }
    else if (hours > 3)
    {
        over_pay = (hours * 1000) + ((hours - 3) * 300);
    }

    gross = over_pay + FIXED_PAY;
    

    if (gross >= 0 && gross <= 39999)
    {
        paye = 0;
    }
    else if (gross >= 40000 && gross <= 69999)
    {
        paye = 0.15 * gross;
    }
    else if (gross >= 70000 && gross <= 89999)
    {
        paye = 0.2 * gross;
    }
    else if (gross >= 90000 && gross <= 99999)
    {
        paye = 0.25 * gross;
    }
    else if (gross < 100000)
    {
        paye = 0.3 * gross;
    }

    //Compute Net paye
    net_pay = gross - paye - (NSSF + NHIF + SERVICE_CHARGES);

    printf("\n\n\n\n");
    printf("_____________________________________________________________\n");
    printf("|Gross \t\t\t|PAYE\t\t\t|Net Pay   |\n");
    printf("_____________________________________________________________\n");
    printf("|%.2lf\t\t|%.2lf\t\t|%.2lf |\n\n\n", gross, paye, net_pay);

    return 0;
}