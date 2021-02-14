#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{

    long pass = 'Fg3$';

    if (isupper(pass) && isdigit(pass) && islower(pass))
    {
        printf(" you password is strong  ");
    }
    return 0;
}