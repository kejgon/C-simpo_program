#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

int main()
{

    char names[11][9] = {"jane",
                         "jamal",
                         "sara",
                         "faiza",
                         "john",
                         "edword",
                         "chris",
                         "alban",
                         "eric"};
    int i;

    for (i = 0; i < 10; i++)
    {
        if (strcpy(names[i], "john"))
        {
        }
        else
        {
            printf("Sorry john is nowhere to be found.\n");
        }
    }
    printf("Name: %s\n", names[i]);

    return 0;
}