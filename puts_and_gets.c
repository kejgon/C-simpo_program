#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{

    char catsName[50];
    char catFood[25];
    char sentence[75] = "";

    puts("What's the cats dumb name? ");
    gets(catsName);
    puts("What do he eat? ");
    gets(catFood);

    strcat(sentence, catsName);

    puts(sentence);

    return 0;
}