#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

int main()
{

    ///?????????????????????? DISPLAYING NAMES ???
    char names[5][20], i = 0, n = 0;

    while (i < 5)
    {
        printf("Enter the  of Names : \n");
        scanf("%s", &names[i]);
        i++;
        // printf("index %d =>  %s\n", i, &name[i]);
    }
    while (n < 5)
    {
        printf("Index :%d Names : %s\n ", n, names[n]);
        n++;
    }

    return 0;
}