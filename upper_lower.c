#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{

    char ham[100] = " Hello mello ";

    strcat(ham, "Bucky");
    printf("%s\n", ham);

    return 0;
}