#include <stdio.h>

int main()
{

    int num;

    printf("Enter  any number");
    scanf("%d", &num);

    if (num % 2 == 1)
    {
        printf("Then number is an ODD ");
    }
    else
    {
        printf("Then number an EVEN number ");
    }

    return 0;
}