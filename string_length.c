#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

int main()
{

    char movie[20];
    char *pMovie = movie;

    fgets(pMovie, 5, stdin);

    puts(pMovie);

    return 0;
}