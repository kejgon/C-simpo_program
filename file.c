#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f_pointer;
    // we can create, write, read, and add (append)
    // f_pointer = fopen("text.txt", "w"); //writing
    // fprintf(f_pointer, "I love coding C\n");

    // f_pointer = fopen("text.txt", "r"); // reading a file
    f_pointer = fopen("text.txt", "a"); //Appendding or adding a file

    char singleline[150];
    fprintf(f_pointer, "\n- a C programming C programming C programming C programming"); //Appendding into a file

    // while (!feof(f_pointer))
    // {
    //     fgets(singleline, 150, f_pointer);
    //     puts(singleline);
    // }

    fclose(f_pointer);

    return 0;
}